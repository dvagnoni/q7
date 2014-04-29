//
//  DetailViewContoller.h
//  Quiz7
//
//  Created by Daniel Vagnoni on 4/29/14.
//  Copyright (c) 2014 Daniel Vagnoni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@interface Q7DetailViewController : UIViewController <UITextFieldDelegate>

@property (strong, nonatomic) Task *detailItem;
@property (nonatomic, copy) void (^dismissBlock)(void);
- (IBAction)save:(id)sender;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UISlider *slider;
@end
