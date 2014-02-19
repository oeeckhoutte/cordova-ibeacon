#import <Cordova/CDV.h>
#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface iBeacon : CDVPlugin

@property NSArray *proximityUUIDs;
@property NSUUID *defaultProximityUUID;
@property NSNumber *defaultPower;

- (iBeacon*)pluginInit;

@end









// @interface EstimoteBeacons : CDVPlugin

// @property NSArray *beacons;
// @property ESTBeaconRegion* currentRegion;
// @property NSString* connectionCallbackId;
// @property NSString* firmwareUpdateProgress;
// @property ESTBeacon* connectedBeacon;
// @property NSMutableDictionary* regionWatchers;
// - (EstimoteBeacons*)pluginInitialize;
// @end