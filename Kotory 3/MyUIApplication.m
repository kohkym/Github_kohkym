//
//  MyUIApplication.m
//  Kotory 3
//
//  Created by Kohki Miura on 2014/06/21.
//  Copyright (c) 2014年 Kohki Miura. All rights reserved.
//

#import "MyUIApplication.h"


@implementation MyUIApplication

- (BOOL) openURL:(NSURL *)url
{
    if (!url) {
        return NO;
    }
    self.myOpenURL = url;
    AppDelegate *appDelegate = [[UIApplication sharedApplication] delegate];
    UIStoryboard *storyoard = [UIStoryboard storyboardWithName:@"Main"
                                                        bundle:[NSBundle mainBundle]];
    WebViewController *webViewController =
    [storyoard instantiateViewControllerWithIdentifier:@"WebViewController"];
    webViewController.openURL = self.myOpenURL;
    webViewController.title = @"Web View";
    [appDelegate.navigationController pushViewController:webViewController animated:YES];
    self.myOpenURL= nil;
    return YES;
}

@end
