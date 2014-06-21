//
//  TimeLineTableViewController.h
//  TwitterClient01
//
//  Created by Satoshi Nakagawa on 2014/04/12.
//  Copyright (c) 2014年 nakasen.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>
#import <Accounts/Accounts.h>
#import "TimeLineCell.h"
#import "DetailViewController.h"
#import "SharedDataManager.h"

@interface TimeLineTableViewController : UITableViewController

@property (nonatomic, copy) NSString *identifier;

@end