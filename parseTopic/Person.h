//
//  Person.h
//  parseTopicStudentVersion
//
//  Created by Eduardo Alvarado Díaz on 10/28/14.
//  Copyright (c) 2014 Mobile Makers. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface Person : PFObject <PFSubclassing>
@property NSString *name;
@property NSNumber *age;

-(BOOL)isTeenager;

@end
