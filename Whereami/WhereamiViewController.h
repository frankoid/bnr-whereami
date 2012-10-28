//
//  WhereamiViewController.h
//  Whereami
//
//  Created by Francis Devereux on 28/10/2012.
//  Copyright (c) 2012 Francis Devereux. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WhereamiViewController : UIViewController <CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
}
@end
