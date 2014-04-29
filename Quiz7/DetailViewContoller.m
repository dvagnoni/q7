//
//  DetailViewContoller.m
//  Quiz7
//
//  Created by Daniel Vagnoni on 4/29/14.
//  Copyright (c) 2014 Daniel Vagnoni. All rights reserved.
//

#import "Q7DetailViewController.h"

@interface Q7DetailViewController ()
- (void)configureView;
@end

@implementation Q7DetailViewController
@synthesize dismissBlock;
#pragma mark - Managing the detail item

- (void)setDetailItem:(Task *)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.
    
    if (self.detailItem) {
        [self.nameTextField setText:[self.detailItem name]];
        [self.slider setValue:[self.detailItem urgency]];
        [self.datePicker setDate:[self.detailItem dueDate]];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self.nameTextField setDelegate:self];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [textField resignFirstResponder];
    return YES;
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)save:(id)sender {
    [self.detailItem setName:[self.nameTextField text]];
    [self.detailItem setUrgency:[self.slider value]];
    [self.detailItem setDueDate:[self.datePicker date]];
    [self.presentingViewController dismissViewControllerAnimated:NO completion:dismissBlock];
}
@end
