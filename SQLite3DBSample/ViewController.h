//
//  ViewController.h
//  SQLite3DBSample
//
//  Created by Charle Prabhat on 25/6/14.
//  Copyright (c) 2014 Tuli. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EditInfoViewController.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EditInfoViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblPeople;


- (IBAction)addNewRecord:(id)sender;

@end
