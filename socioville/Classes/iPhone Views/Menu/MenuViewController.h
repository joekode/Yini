//
//  MenuViewController.h
//  socioville
//
//  Created by Valentin Filip on 09.04.2012.
//  Copyright (c) 2012 App Design Vault. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZUUIRevealController.h"
#import "BWLord.h"
#import "BWMyLordInfoViewController.h"
#import "WSQFileHelper.h"


@interface MenuViewController : UIViewController <ZUUIRevealControllerDelegate, UITableViewDelegate, UITableViewDataSource, WSQFileHelperDelegate, MyLordInfoViewDelegate>

@property (strong, nonatomic) IBOutlet UISearchBar *searchBar;
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end