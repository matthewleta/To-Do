//
//  ToDoItem.h
//  To Do 3
//
//  Created by Matthew Leta on 8/2/15.
//  Copyright (c) 2015 Matthew Leta. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
