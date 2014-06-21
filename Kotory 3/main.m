//
//  main.m
//  Kotory 3
//
//  Created by Kohki Miura on 2014/06/20.
//  Copyright (c) 2014年 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AppDelegate.h"
#import "MyUIApplication.h"


int main(int argc, char * argv[])
{
    @autoreleasepool {
        return UIApplicationMain(argc,
                                 argv,
                                 NSStringFromClass([MyUIApplication class]),
                                 NSStringFromClass([AppDelegate class]));
    }
}
