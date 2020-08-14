//
//  YGConfigDefine.h
//  JingPin
//
//  Created by yiguomac on 2018/9/11.
//  Copyright © 2018年 yiguomac. All rights reserved.
//

#ifndef YGConfigDefine_h
#define YGConfigDefine_h

// 引导页图片，若需要关闭引导页可将此图片数组清空
#define kGuideImageArray  @[]

//认证服务  服务地址
#define __AuthServerReqURL [SWDeviceInfo get_AuthServerReqURL]

//认证服务 Token前缀
#define __AuthServerTokenPrdfix_New @"JWTToken"
#define __AuthServerTokenPrdfix_Old @"Bearer"

//门户 服务地址
#define __PortalReqURL [SWDeviceInfo get_PortalReqURL]

//获取资源服务地址 前缀
#define __ResourceUrl [SWDeviceInfo get_ResourceUrl]

//cas认证接口地址
#define __CasServerBaseURL  @"https://tydj.haust.edu.cn"

//个人安全中心  服务地址
#define __Personal_securityURL [SWDeviceInfo get_personal_securityURL]


//获取配置接口地址
#define __ConfigListBaseURL  @"https://superapp-haust.supwisdom.com"

//用户没有开启网络权限 进行提示操作 展示错误界面
#define __ShowErrorView @"showErrorView"

//微信登录通知
#define __WexinLoginNoti @"WexinLoginNoti"

//个推推送
#define __GTPushNoti @"GTPushNoti"

//微信登录通知
#define __ZhifubaoNoti @"ZhifubaoNoti"

//个推消息存储
#define __GTMessage @"GTMessageGT"

// 是否已经打开过引导页，本地记录Key
#define kGuideVersionKey [NSString stringWithFormat:@"guidepage%@_%@",[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"],[[[NSBundle mainBundle]infoDictionary] objectForKey:@"CFBundleVersion"]]

// kAppDelegate
#define kAppDelegate     (AppDelegate *)[UIApplication sharedApplication].delegate

//消息
#define KRemindBaseUrl   @"https://superappres.haust.edu.cn/pages/messages/detail/entry.js"

//weixin -西工大
//#define KWeixinKey   @"wx7ddbeb69411d22c1"
//#define KWeixinSecret   @"d332858ed67c33db4342222d7c21488a"
//#define KWeixinUniversalLink  @"https://itunes.apple.com/"

//weixin -树维
#define KWeixinKey   @"wxa35fa041dc63fbd0"
#define KWeixinSecret   @"d332858ed67c33db4342222d7c21488a"
#define KWeixinUniversalLink  @"https://www.supwisdom.com/universalLinks/"


//UM - 友盟
#define KUMAppKey   @"5ebb6234895cca98d2000206"

#define KUMAppKeyPAD   @"5ec73d01167edd123b00021d"

//#error "请在百度AI官网新建应用，配置包名，并在此填写应用的 api key, secret key, appid(即appcode)"

#define KAPP_ID  @"19178180"
#define KAPI_KEY  @"4FjG3Gxc0KEjQmeBEvUh89Gp"
#define KSECRET_KEY  @"vOqGtWsRQCSwQ9fvseQFzKaLEmb5ZVzc"

//百度自然语言 账号信息
#define KAPP_ID_A  @"19475960"
#define KAPI_KEY_A  @"GTbZQ1xrMYWSULGjz1CCYVDk"
#define KSECRET_KEY_A  @"GoyPZ7juHIKkyX9ZLhBGvXLyU39HQAr3"

//个推

#define kGtAppId   @"zTAB9SaS0M9huJEldWq2O6"
#define kGtAppKey   @"qVOWgTPa1292gfGqeLdoO5"
#define kGtAppSecret   @"TyT0NsGDWk8NAxeg1JhsD1"
#endif /* YGConfigDefine_h */
