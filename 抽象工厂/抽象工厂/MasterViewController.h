//
//  MasterViewController.h
//  抽象工厂
//
//  Created by rjb on 2018/8/28.
//  Copyright © 2018年 rjb. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

