Store Migration
==============

iOS Project demonstrating how to migrate a Core Data Store from one URL to another, based on the Master/Detail Template.

Instructions
============
     
The app adds a single method at the end of the AppDelegate.m file called migrateStore. This is called just before the end in applicationDidFinishLaunchingWithOptions, but it's commented out by default. Here's how to proceed:

     1.) Run the app as is and add a few records (using the + button)
     2.) Stop the app and comment out the line [self migrateStore]
     3.) Run the app again and watch the log output
     
On the second run we'll migrate the store from the first URL to another. Two NSLog messages will display the URL before and after the migration, showing which store is used by Core Data. Note that after the migration the previous store file can be deleted.

Should you with to run the app again, please comment out the line [self migrateStore] and change the store file you'd like to work with in the persistent store's custom initialiser.

You can read more in my companion article here: http://pinkstone.co.uk/how-to-migrate-your-persistent-store-from-one-location-to-another/
