//
//  Usuario.h
//  WheelChair2
//
//  Created by Vitor on 6/9/15.
//  Copyright (c) 2015 Bepid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Usuario : NSManagedObject

@property (nonatomic, retain) NSString * nome;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * senha;
@property (nonatomic, retain) NSData * avatar;

@end
