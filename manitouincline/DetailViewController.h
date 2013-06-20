//
//  DetailViewController.h
//  manitouincline
//
//  Created by Brian on 6/20/13.
//  Copyright (c) 2013 Unplugged Systems, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
