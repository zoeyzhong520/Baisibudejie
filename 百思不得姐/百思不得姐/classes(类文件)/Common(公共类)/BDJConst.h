//
//  BDJConst.h
//  百思不得姐
//
//  Created by gaokunpeng on 2016/11/21.
//  Copyright © 2016年 gaokunpeng. All rights reserved.
//

#ifndef BDJConst_h
#define BDJConst_h

//这个文件用来存放项目中的常量

//一、屏幕的宽度和高度
//const CGFloat kscreenWidth = [[UIScreen mainScreen] bounds].size.width;

#define kScreenWidth  ([[UIScreen mainScreen] bounds].size.width)
#define kScreenHeight ([[UIScreen mainScreen] bounds].size.height)



//二、网址链接


//获取菜单
//http://s.budejie.com/public/list-appbar/bs0315-iphone-4.3/



//1.精华
//1)首页
//1.1 推荐
//http://s.budejie.com/topic/list/jingxuan/1/bs0315-iphone-4.3/0-20.json

//http://s.budejie.com/topic/list/jingxuan/1/bs0315-iphone-4.3/1472004962-20.json


//1.1.1 赞一下
//http://api.budejie.com/api/api_open.php?a=love&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=post&client=iphone&device=iPhone%205&from=ios&id=20063833&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&sex=m&tj_from=image&udid=&uid=19266938&ver=4.3
//1.1.2 鄙视一下
//http://api.budejie.com/api/api_open.php?a=cai&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=post&client=iphone&device=iPhone%205&from=ios&id=20299284&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&sex=m&tj_from=video&udid=&uid=19266938&ver=4.3

//1.1.3 分享

//1.1.4 发表评论

//评论列表
//第一页
//http://api.budejie.com/api/api_open.php?a=dataList&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=comment&client=iphone&data_id=19915060&device=iPhone%205&from=ios&hot=1&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&page=1&per=50&udid=&uid=19266938&ver=4.3

//第一页
//http://api.budejie.com/api/api_open.php?a=dataList&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=comment&client=iphone&data_id=20299284&device=iPhone%205&from=ios&hot=1&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&page=1&per=50&udid=&uid=19266938&ver=4.3

//第二页
//http://api.budejie.com/api/api_open.php?a=dataList&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=comment&client=iphone&data_id=20299284&device=iPhone%205&from=ios&hot=1&jbk=0&lastcid=62537056&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&page=2&per=50&udid=&uid=19266938&ver=4.3



//1.2视频
//http://s.budejie.com/topic/list/jingxuan/41/bs0315-iphone-4.3/0-20.json

//http://s.budejie.com/topic/list/jingxuan/41/bs0315-iphone-4.3/1471995962-20.json






//2)穿越

//1.2.1全部
//http://d.api.budejie.com/topic/list/chuanyue/1/bs0315-iphone-4.3/0-20.json

//1.2.2视频
//http://d.api.budejie.com/topic/list/chuanyue/41/bs0315-iphone-4.3/0-20.json



//1.2.3图片

//http://d.api.budejie.com/topic/list/chuanyue/10/bs0315-iphone-4.3/0-20.json

//1.2.4段子

// http://d.api.budejie.com/topic/list/chuanyue/29/bs0315-iphone-4.3/0-20.json

//1.2.5声音
//http://d.api.budejie.com/topic/list/chuanyue/31/bs0315-iphone-4.3/0-20.json



//2.最新
//2.1 全部
//http://s.budejie.com/topic/list/zuixin/1/bs0315-iphone-4.3/0-20.json

//http://s.budejie.com/topic/list/zuixin/1/bs0315-iphone-4.3/1546498941-20.json

//2.2视频
//http://s.budejie.com/topic/list/zuixin/41/bs0315-iphone-4.3/0-20.json

//http://s.budejie.com/topic/list/zuixin/41/bs0315-iphone-4.3/1472012245-20.json


//2.3图片
//http://s.budejie.com/topic/list/zuixin/10/bs0315-iphone-4.3/0-20.json
//http://s.budejie.com/topic/list/zuixin/10/bs0315-iphone-4.3/1472009560-20.json

//2.4段子

//http://d.api.budejie.com/op/square/bs0315-iphone-4.3/0-100
//http://s.budejie.com/topic/list/zuixin/29/bs0315-iphone-4.3/1472011623-20.json


//2.5网红
//http://s.budejie.com/topic/tag-topic/3096/new/bs0315-iphone-4.3/0-20.json
//http://s.budejie.com/topic/tag-topic/3096/new/bs0315-iphone-4.3/92875226-20.json

//2.6美女
//http://s.budejie.com/topic/tag-topic/117/new/bs0315-iphone-4.3/0-20.json
//http://s.budejie.com/topic/tag-topic/117/new/bs0315-iphone-4.3/92949642-20.json

//2.7冷知识
//http://s.budejie.com/topic/tag-topic/3176/new/bs0315-iphone-4.3/0-20.json

//http://s.budejie.com/topic/tag-topic/3176/new/bs0315-iphone-4.3/92922714-20.json

//2.8游戏
//http://s.budejie.com/topic/tag-topic/164/new/bs0315-iphone-4.3/0-20.json
//http://s.budejie.com/topic/tag-topic/164/new/bs0315-iphone-4.3/92894967-20.json


//2.9声音
//http://s.budejie.com/topic/list/zuixin/31/bs0315-iphone-4.3/0-20.json
//http://s.budejie.com/topic/list/zuixin/31/bs0315-iphone-4.3/1471717381-20.json


//3.添加

//3.1 视频
//http://app.spriteapp.com/setting/param/?param=12

//发表
//http://api.budejie.com/api/api_open.php
//参数:
/*--Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="a"
 
 createUgc
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="app"
 
 0
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="appname"
 
 bs0315
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="asid"
 
 85B76C13-0B29-452C-AEAD-C07DB202EB0D
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="c"
 
 topic
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="client"
 
 iphone
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="content"
 
 helli
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="device"
 
 iPhone 5
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="format"
 
 json
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="from"
 
 ios
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="jbk"
 
 0
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="latitude"
 
 0
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="longitude"
 
 0
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="mac"
 
 
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="market"
 
 
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="openudid"
 
 79e2fe79d9cb93a19eb8f530e2f301a8798a09e2
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="reserve"
 
 
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="sex"
 
 m
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="shareType"
 
 
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="tag"
 
 
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="theme_id"
 
 55,115
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="theme_name"
 
 
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="type"
 
 41
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="udid"
 
 
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="uid"
 
 19266938
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="ver"
 
 4.3
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="videotime"
 
 6
 --Boundary+0xAbCdEfGbOuNdArY
 Content-Disposition: form-data; name="video"; filename="20160905003221merge.mp4"
 Content-Type: video/mp4
 */

//获取列表
//http://d.api.budejie.com/topic/my-topic/bs0315-iphone-4.3/0-20.json?appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&udid=&uid=19266938&ver=4.3


//3.2 发图片

//发送


//获取列表

//3.3 发段子

//3.4 发声音

//3.5 审帖

//3.6 发链接


//4.关注

//1)注册和登陆

//注册
//https://api.budejie.com/api/api_open.php?a=getverify&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&countrycode=86&device=iPhone%205&device_id=85B76C13-0B29-452C-AEAD-C07DB202EB0D&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&phonenum=13716422377&sec=eb7044538be2e5214b837fae4b920438&time=20160904231408&udid=&ver=4.3&verifytype=1

//短信验证

//https://api.budejie.com/api/api_open.php?a=verify&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&countrycode=86&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&phonenum=15900546915&seq=e80459ce16d1623829051029433ef0a5&udid=&ver=4.3&verifycode=1245

//登陆
//https://api.budejie.com/api/api_open.php?a=login&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&countrycode=86&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&password=yPkCTOTFGLtzTj6okr04lQ%3D%3D&phonenum=15900546915&udid=&ver=4.3

//推荐订阅
//http://d.api.budejie.com/tag/subscribe/bs0315-iphone-4.3.json?appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&udid=&ver=4.3

//修改资料

//QQ绑定
//POST:http://api.budejie.com/api/api_open.php
//参数:a=binding&account=F76BAF2923357D103E54D7F2C7B5487A&app=0&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&format=json&from=ios&jbk=0&key=CB328B4C23B5CC394DA7E80001BAC359&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&secret=&type=qzone&udid=&ver=4.3

//http://api.budejie.com/api/api_open.php?a=get_ruler&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&udid=&ver=4.3


//POST: http://api.budejie.com/api/api_open.php

//a=modify&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&from=ios&gender=m&id=19266938&jbk=0&mac=&market=&name=%E5%8A%A0%E4%BB%B7%E4%B8%8D%E7%9F%A5%E9%81%93&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&udid=&ver=4.3

//绑定手机号
// https://api.budejie.com/api/api_open.php?a=getverify&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&countrycode=86&device=iPhone%205&device_id=85B76C13-0B29-452C-AEAD-C07DB202EB0D&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&phonenum=15900546915&sec=bb82f7f8576fe0a431e98127ac92e2ac&sex=m&time=20160904232434&udid=&uid=19266938&ver=4.3&verifytype=1

//推荐订阅

//推荐关注
//http://s.budejie.com/topic/history-hot/bs0315-iphone-4.3/

//2)关注

//关注首页的列表


//http://d.api.budejie.com/topic/friends-topic/bs0315-iphone-4.3/0-20.json

//http://d.api.budejie.com/topic/friends-topic/bs0315-iphone-4.3/1473002982-20.json


//http://api.budejie.com/api/api_open.php?a=guide&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&pre=50&udid=&uid=19266938&ver=4.3

//推荐关注的类型列表
//http://api.budejie.com/api/api_open.php?a=category&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=subscribe&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&udid=&uid=19266938&ver=4.3

//某个类型的关注列表
//http://api.budejie.com/api/api_open.php?a=friend_recommend&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&from=ios&jbk=0&last_coord=&last_flag=list&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&pre=50&udid=&uid=19266938&ver=4.3

//用户信息

//a)基本信息

//http://api.budejie.com/api/api_open.php?a=profile&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&sex=m&udid=&uid=19266938&userid=16905121&ver=4.3

//b)用户列表帖子
//http://s.budejie.com/topic/user-topic/15756187/1/desc/bs0315-iphone-4.3/0-20.json

//http://s.budejie.com/topic/user-topic/15756187/1/desc/bs0315-iphone-4.3/1472797546-20.json

//c)用户列表分享
//http://s.budejie.com/topic/share-topic/16905121/bs0315-iphone-4.3/0-20.json

//d）用户列表评论
//http://s.budejie.com/comment/user-comment/16905121/bs0315-iphone-4.3/0-20.json

//e)用户信息赞一下
//http://api.budejie.com/api/api_open.php?a=create&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&buid=16905121&c=praise&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&sex=m&udid=&uid=19266938&ver=4.3

//f)粉丝列表
//第一页http://api.budejie.com/api/api_open.php?a=fans_list&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&follow_id=0&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&sex=m&udid=&uid=19266938&userid=16905121&ver=4.3

//第二页http://api.budejie.com/api/api_open.php?a=fans_list&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&follow_id=64898070&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&sex=m&udid=&uid=19266938&userid=16905121&ver=4.3

//g)关注列表

//http://api.budejie.com/api/api_open.php?a=follow_list&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&follow_id=0&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&sex=m&udid=&uid=19266938&userid=16905121&ver=4.3

//关注功能
//http://api.budejie.com/api/api_open.php?a=follow&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&sex=m&udid=&uid=19266938&userid=6904791&ver=4.3

//搜索
//http://api.budejie.com/api/api_open.php?a=search&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&page=1&per=20&sex=m&udid=&uid=19266938&uname=%E4%BA%8C&ver=4.3



//5.我的界面

//http://d.api.budejie.com/op/square/bs0315-iphone-4.3/0-100.json


//5.1 用户信息
//http://api.budejie.com/api/api_open.php
//参数:a=info&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=user&client=iphone&device=iPhone%205&from=ios&id=19266938&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&udid=&uid=19266938&ver=4.3

//5.2.1排行榜

//全部
//http://s.budejie.com/topic/top-topic/1/day/forward/bs0315-iphone-4.3/0-20.json

//http://s.budejie.com/topic/top-topic/1/day/forward/bs0315-iphone-4.3/20-20.json

//视频
//http://s.budejie.com/topic/top-topic/41/day/forward/bs0315-iphone-4.3/0-20.json

//图片
//http://s.budejie.com/topic/top-topic/10/day/forward/bs0315-iphone-4.3/0-20.json

//段子
//http://s.budejie.com/topic/top-topic/29/day/forward/bs0315-iphone-4.3/0-20.json

//声音
//http://s.budejie.com/topic/top-topic/31/day/forward/bs0315-iphone-4.3/0-20.json

//周榜
//http://s.budejie.com/topic/top-topic/31/week/forward/bs0315-iphone-4.3/0-20.json

//月榜
//http://s.budejie.com/topic/top-topic/31/month/forward/bs0315-iphone-4.3/0-20.json

//季度榜
//http://s.budejie.com/topic/top-topic/31/quarter/forward/bs0315-iphone-4.3/0-20.json
//年榜
//http://s.budejie.com/topic/top-topic/31/year/forward/bs0315-iphone-4.3/0-20.json

//评论最多
//http://s.budejie.com/topic/top-topic/31/year/comment/bs0315-iphone-4.3/0-20.json

//点赞最多
//http://s.budejie.com/topic/top-topic/31/year/up/bs0315-iphone-4.3/0-20.json

//5.2.2 审帖

//5.2.3 我的收藏

//5.2.4 内容贡献榜

//5.2.5 随机穿越

//5.2.6 意见反馈
//5.2.7 搜索

//5.2.8 美女写真

//5.2.9 头条新闻

//5.2.10 更多

//5.3 推荐订阅
//5.3.1 列表
//http://d.api.budejie.com/tag/subscribe/bs0315-iphone-4.3.json?appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&udid=&ver=4.3

//5.3.2 某一项的详情

//5.3.2.1
//基本信息
//http://api.budejie.com/api/api_open.php?a=theme_info&appname=bs0315&asid=85B76C13-0B29-452C-AEAD-C07DB202EB0D&c=topic&client=iphone&device=iPhone%205&from=ios&jbk=0&mac=&market=&openudid=79e2fe79d9cb93a19eb8f530e2f301a8798a09e2&theme_id=9&udid=&ver=4.3

//最新

//http://s.budejie.com/topic/tag-topic/9/new/bs0315-iphone-4.3/0-20.json
//http://s.budejie.com/topic/tag-topic/9/new/bs0315-iphone-4.3/93803827-20.json

//最热
//http://s.budejie.com/topic/tag-topic/9/hot/bs0315-iphone-4.3/0-20.json


//6.其他

//http://oc.umeng.com/v2/check_config_update

//http://api.budejie.com/api/api_open.php?c=topic&a=btn



#endif /* BDJConst_h */
