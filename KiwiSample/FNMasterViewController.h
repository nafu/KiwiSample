//
//  FNMasterViewController.h
//  KiwiSample
//
//  Created by Fumiya Nakamura on 13-04-04.
//  Copyright (c) 2013 Fumiya Nakamura. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FNDetailViewController;

@interface FNMasterViewController : UITableViewController

@property (strong, nonatomic) FNDetailViewController *detailViewController;

@end
