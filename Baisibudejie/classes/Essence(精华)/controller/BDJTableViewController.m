//
//  BDJTableViewController.m
//  Baisibudejie
//
//  Created by qianfeng on 16/11/21.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "BDJTableViewController.h"
#import "BDJEssenceModel.h"
#import "EssenceVideoCell.h"

@interface BDJTableViewController ()<UITableViewDelegate,UITableViewDataSource>

//表格
@property (nonatomic, strong)UITableView *tableView;

//数据
@property (nonatomic, strong)BDJEssenceModel *model;

//分页
@property (nonatomic, strong)NSNumber *np;

@end

@implementation BDJTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    //self.view.backgroundColor = [UIColor redColor];
    
    //创建表格
    [self createTableView];
    
    //下载数据
    self.np = @(0);
    [self downloadListData];
}



//创建表格
- (void)createTableView {
    
    self.automaticallyAdjustsScrollViewInsets = NO;
    self.tableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStylePlain];
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    [self.view addSubview:self.tableView];
    
    //约束
    __weak typeof(self) weakSelf = self;
    [self.tableView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.equalTo(weakSelf.view);
    }];
    
    //header
    _tableView.mj_header = [MJRefreshNormalHeader headerWithRefreshingTarget:self refreshingAction:@selector(loadFirstPage)];
    
    
    //footer
    _tableView.mj_footer = [MJRefreshAutoNormalFooter footerWithRefreshingTarget:self refreshingAction:@selector(loadMorePage)];
    
}

//下拉刷新
- (void)loadFirstPage {
    self.np = @(0);
    [self downloadListData];
}

//上拉加载
- (void)loadMorePage {
    self.np = self.model.info.np;
    [self downloadListData];
}

//下载数据
- (void)downloadListData {
    
    [ProgressHUD show:@"正在下载" Interaction:NO];
    
    NSString *urlString = [NSString stringWithFormat:@"%@/bs0315-iphone-4.3/%@-20.json", self.url,self.np];
    
    [BDJDownload downloadWithURLString:urlString success:^(NSData *data) {
        
        NSError *error = nil;
        BDJEssenceModel *model = [[BDJEssenceModel alloc] initWithData:data error:&error];
        
        if (error) {
            NSLog(@"%@",error);
        }else{
            if (self.np.integerValue) {
                //第一页
                self.model = model;
            }else{
                //后面的页数
                NSMutableArray *tmpArray = [NSMutableArray arrayWithArray:self.model.list];
                [tmpArray addObjectsFromArray:model.list];
                model.list = (NSArray<Optional,BDJEssenceDetail> *)tmpArray;
                self.model = model;
            }
            
            //刷新表格
            dispatch_async(dispatch_get_main_queue(), ^{
                [self.tableView reloadData];
                
                //结束第三方库的刷新
                [self.tableView.mj_header endRefreshing];
                [self.tableView.mj_footer endRefreshing];
                
                [ProgressHUD showSuccess:@"下载成功"];
            });
        }
        
        
    } fail:^(NSError *error) {
        [ProgressHUD showError:@"下载失败"];
    }];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
 #pragma mark - Navigation
 
 // In a storyboard-based application, you will often want to do a little preparation before navigation
 - (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
 // Get the new view controller using [segue destinationViewController].
 // Pass the selected object to the new view controller.
 }
 */

#pragma mark - UITableView代理方法
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.model.list.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    BDJEssenceDetail *detail = self.model.list[indexPath.row];
    
    UITableViewCell *cell = nil;
    if ([detail.type isEqualToString:@"video"]) {
        
        cell = [EssenceVideoCell videoCellForTableView:tableView atIndexPath:indexPath withModel:detail];
    }else{
        cell = [[UITableViewCell alloc] init];
    }
    
    cell.selectionStyle = UITableViewCellSelectionStyleNone;
    
    return cell;    
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    BDJEssenceDetail *detail = self.model.list[indexPath.row];
    return detail.cellHeight.floatValue;
}

- (CGFloat)tableView:(UITableView *)tableView estimatedHeightForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    return 400;
}


@end
