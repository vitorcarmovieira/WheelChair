//
//  Exercicio.h
//  WheelChair2
//
//  Created by Vitor on 6/9/15.
//  Copyright (c) 2015 Bepid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Exercicio : NSManagedObject

@property (nonatomic, retain) NSData * imageGuia;
@property (nonatomic, retain) NSString * nome;
@property (nonatomic, retain) NSString * detalhes;
@property (nonatomic, retain) NSString * idEquipamento;
@property (nonatomic, retain) NSString * tempo;
@property (nonatomic, retain) NSDecimalNumber * vezesPraticadas;
@property (nonatomic, retain) NSData * animacao;

@end
