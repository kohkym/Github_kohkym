//
//  DetailViewController.h
//  Kotory 3
//
//  Created by Kohki Miura on 2014/06/21.
//  Copyright (c) 2014年 Kohki Miura. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>
#import <Accounts/Accounts.h>
#import "AppDelegate.h"

@interface DetailViewController : UIViewController
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idStr;

@end

