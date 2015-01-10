//
//  DetailViewController.h
//  FeelAtHome
//
//  Created by Franck Lambertz on 10/01/2015.
//  Copyright (c) 2015 Franck Lambertz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
