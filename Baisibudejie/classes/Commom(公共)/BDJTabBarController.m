//
//  BDJTabBarController.m
//  Baisibudejie
//
//  Created by qianfeng on 16/11/21.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "BDJTabBarController.h"
#import "BDJTabBar.h"
#import "BDJMenu.h"
#import "EssenceViewController.h"

@interface BDJTabBarController ()

@end

@implementation BDJTabBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [UITabBar appearance].tintColor = [UIColor colorWithWhite:64.0f/255.0f alpha:1.0f];
    
    //使用自定制的tabbar
    [self setValue:[[BDJTabBar alloc] init] forKey:@"tabBar"];
    
    //创建视图控制器
    [self createViewControllers];
    
    //获取菜单数据
    [self loadMenuData];
    
}

//获取菜单数据
- (void)loadMenuData {
    
    NSString *filePath = [self menuFilePath];
    if ([[NSFileManager defaultManager] fileExistsAtPath:filePath]) {
        
        //读文件
        NSData *data = [NSData dataWithContentsOfFile:filePath];
        BDJMenu *menu = [[BDJMenu alloc] initWithData:data error:nil];
        
        //显示
        [self showAllMenuData:menu];
   
    }
    
    //更新菜单数据
    [self downloadMenuData];
    
}

//下载菜单数据
- (void)downloadMenuData {
    
    //http://s.budejie.com/public/list-appbar/bs0315-iphone-4.3/
    [BDJDownload downloadWithURLString:@"http://s.budejie.com/public/list-appbar/bs0315-iphone-4.3/" success:^(NSData *data) {
        
        //解析
        BDJMenu *menu = [[BDJMenu alloc] initWithData:data error:nil];
        
        NSString *path = [self menuFilePath];
        
        //如果plist文件不存在，显示菜单数据
        if (![[NSFileManager defaultManager] fileExistsAtPath:path]) {
            
            [self showAllMenuData:menu];
        }
        
        //存到本地
        [data writeToFile:path atomically:YES];
        
    } fail:^(NSError *error) {
        NSLog(@"%@",error);
    }];
}

//本地存储菜单数据的文件名
- (NSString *)menuFilePath {
    
    NSString *docPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    
    return [docPath stringByAppendingPathComponent:@"menu.plist"];
}

//显示菜单数据
- (void)showAllMenuData:(BDJMenu *)menu {
    
    //设置精华的菜单数据
    UINavigationController *essenceNavCtrl = [self.viewControllers firstObject];
    
    EssenceViewController *essenceCtrl = [essenceNavCtrl.viewControllers firstObject];
    essenceCtrl.subMenus = [[menu.menus firstObject] submenus];
    
}

//创建视图控制器
- (void)createViewControllers {
    
    //精华
    [self addSubController:@"EssenceViewController" imageName:@"tabBar_essence_icon" seletImageName:@"tabBar_essence_click_icon" title:@"精华"];
    
    //最新
    [self addSubController:@"NewsViewController" imageName:@"tabBar_new_icon" seletImageName:@"tabBar_new_click_icon" title:@"最新"];
    
    //添加
    //[self addSubController:@"AddViewController" imageName:@"" seletImageName:@"" title:@""];
    
    //关注
    [self addSubController:@"AttentionViewController" imageName:@"tabBar_friendTrends_icon" seletImageName:@"tabBar_friendTrends_click_icon" title:@"关注"];
    
    //我的
    [self addSubController:@"ProfileViewController" imageName:@"tabBar_me_icon" seletImageName:@"tabBar_new_click_icon" title:@"我的"];
}

//
- (void)addSubController:(NSString *)ctrlName imageName:(NSString *)imageName seletImageName:(NSString *)selectImageName title:(NSString *)title {
    
    //创建视图控制器对象
    Class cls = NSClassFromString(ctrlName);
    UIViewController *tmpCtrl = [[cls alloc] init];
    
    //设置文字
    tmpCtrl.tabBarItem.title = title;
    
    //图片
    tmpCtrl.tabBarItem.image = [UIImage imageNamed:imageName];
    tmpCtrl.tabBarItem.selectedImage = [UIImage imageNamed:selectImageName];
    
    //导航
    UINavigationController *navCtrl = [[UINavigationController alloc] initWithRootViewController:tmpCtrl];
    
    //让tabbarCtrl管理这个视图控制器
    [self addChildViewController:navCtrl];
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

@end
