//
// Copyright 2013 Yummy Melon Software LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//  Author: Charles Y. Choi <charles.choi@yummymelon.com>
//

#import <UIKit/UIKit.h>
@class DEAAccelerometerService;
@class DEASensorTag;

/**
 View and control logic for the SensorTag accelerometer service.
 */
@interface DEAAccelerometerViewCell : UITableViewCell

@property (strong, nonatomic) DEAAccelerometerService *service;
@property (strong, nonatomic) IBOutlet UISwitch *notifySwitch;
@property (strong, nonatomic) IBOutlet UILabel *accelXLabel;
@property (strong, nonatomic) IBOutlet UILabel *accelYLabel;
@property (strong, nonatomic) IBOutlet UILabel *accelZLabel;

- (IBAction)notifySwitchAction:(id)sender;

- (void)configureWithSensorTag:(DEASensorTag *)sensorTag;
- (void)deconfigure;


@end