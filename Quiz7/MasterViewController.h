//
//  MasterViewController.h
//  Quiz7
//
//  Created by Daniel Vagnoni on 4/29/14.
//  Copyright (c) 2014 Daniel Vagnoni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"
#import <CoreData/CoreData.h>

@interface Q7MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
