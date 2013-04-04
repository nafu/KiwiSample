//
//  FNDetailViewController.h
//  KiwiSample
//
//  Created by Fumiya Nakamura on 13-04-04.
//  Copyright (c) 2013 Fumiya Nakamura. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FNDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
