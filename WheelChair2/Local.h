//
//  Local.h
//  WheelChair2
//
//  Created by Vitor on 6/9/15.
//  Copyright (c) 2015 Bepid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Local : NSManagedObject

@property (nonatomic, retain) NSString * nome;
@property (nonatomic, retain) NSString * latitude;
@property (nonatomic, retain) NSString * longitude;
@property (nonatomic, retain) NSString * cor;
@property (nonatomic, retain) NSString * info;

@end
