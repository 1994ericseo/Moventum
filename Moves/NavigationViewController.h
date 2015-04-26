//
//  NavigationViewController.h
//  Moves
//
//  Created by Eric Seo on 4/25/15.
//  Copyright (c) 2015 SeoEricc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface NavigationViewController : UITableViewController {
    
    IBOutlet UITableView *Table;
}
- (IBAction)Logout:(id)sender;

@end