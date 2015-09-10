//
//  PlaceDetailsViewController.h
//  iOS-Task
//
//  Created by Rohan Sonawane on 11/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Place.h"

@interface PlaceDetailsViewController : UIViewController

- (void)populateDetailsWithPlace:(Place *)_place;

@end
