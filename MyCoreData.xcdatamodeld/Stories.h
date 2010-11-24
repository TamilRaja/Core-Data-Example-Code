//
//  Stories.h
//  MyCoreData
//
//  Created by Passport on 11/23/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Stories :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * summary;
@property (nonatomic, retain) NSString * link;
@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSString * date;

@end



