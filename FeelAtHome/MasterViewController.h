//
//  MasterViewController.h
//  FeelAtHome
//
//  Created by Franck Lambertz on 10/01/2015.
//  Copyright (c) 2015 Franck Lambertz. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
