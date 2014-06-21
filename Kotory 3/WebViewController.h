//
//  WebViewController.h
//  Kotory 3
//
//  Created by Kohki Miura on 2014/06/21.
//  Copyright (c) 2014年 Kohki Miura. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic, strong) NSURL *openURL;

@end
