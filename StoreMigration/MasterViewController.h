//
//  MasterViewController.h
//  StoreMigration
//
//  Created by Jay Versluis on 31/05/2014.
//  Copyright (c) 2014 Pinkstone Pictures LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
