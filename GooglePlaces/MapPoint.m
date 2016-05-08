//
//  MapPoint.m
//  GooglePlaces
//
//  Created by van Lint Jason on 6/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "MapPoint.h"

@implementation MapPoint
@synthesize name = _name;
@synthesize address = _address;
@synthesize coordinate = _coordinate;
@synthesize placeId = _placeId;



- (id)initWithName:(NSString*)name address:(NSString*)address coordinate:(CLLocationCoordinate2D)coordinate placeId:(NSString*)placeId;
{
    if ((self = [super init])) {
        _name = [name copy];
        _address = [address copy];
        _placeId = [placeId copy];
        _coordinate = coordinate;
        
    }
    return self;
}

- (NSString *)title {
    if ([_name isKindOfClass:[NSNull class]]) 
        return @"Unknown charge";
    else
        return _name;
}

- (NSString *)subtitle {
    return _address;
}

@end
