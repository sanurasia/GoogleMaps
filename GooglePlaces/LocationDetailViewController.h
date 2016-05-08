//
//  LocationDetailViewController.h
//  GooglePlaces
//
//  Created by Sanjay Kumar on 26/02/15.
//
//

#import <UIKit/UIKit.h>
#import "MapPoint.h"
#define kGOOGLE_API_KEY   @"AIzaSyBYG5F7gTMrgWEmcMjOzeHn5mbjCRT5ISs"
#define kBgQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)
@interface LocationDetailViewController : UIViewController{
    
}
@property(nonatomic, strong)MapPoint *Place;
@end
