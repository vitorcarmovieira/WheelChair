//
//  Equipamento.h
//  WheelChair2
//
//  Created by Vitor on 6/9/15.
//  Copyright (c) 2015 Bepid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Equipamento : NSManagedObject

@property (nonatomic, retain) NSString * nome;
@property (nonatomic, retain) NSData * foto;
@property (nonatomic, retain) NSString * loja;
@property (nonatomic, retain) NSString * site;

@end
