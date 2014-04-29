//
//  Task.h
//  Quiz7
//
//  Created by Daniel Vagnoni on 4/29/14.
//  Copyright (c) 2014 Daniel Vagnoni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Task : NSManagedObject

@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) NSString * name;
@property (nonatomic) float  urgency;

@end
