//
//  MasterViewController.h
//  DynaEye
//
//  Created by Vivek Nair on 2/19/15.
//  Copyright (c) 2015 Vivek Nair. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

