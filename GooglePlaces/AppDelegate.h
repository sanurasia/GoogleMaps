//
//  AppDelegate.h
//  GooglePlaces
//
//  Created by van Lint Jason on 1/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,CLLocationManagerDelegate>{
    //User location
    
    CLLocationManager* locationManager;
}
@property (nonatomic, strong) CLLocation* currentlocation;
@property (strong, nonatomic) UIWindow *window;

@end
extern AppDelegate* appDelegate;
