// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#import <Foundation/Foundation.h>
@class DBClientReturnedRecord;


@protocol DBClientInterface

/** Returns record of given string */
- (DBClientReturnedRecord *)getRecord:(int64_t)recordId utf8string:(NSString *)utf8string;

@end
