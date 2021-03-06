//
//  NSString.h
//  Landlords
//
//  Created by GamePlus on 10-6-9.
//  Copyright 2010 Apple Inc. All rights reserved.
//
//  See Also: http://developer.apple.com/iphone/library/documentation/Xcode/Conceptual/iphone_development/135-Unit_Testing_Applications/unit_testing_applications.html

//  Application unit tests contain unit test code that must be injected into an application to run correctly.
//  Define USE_APPLICATION_UNIT_TEST to 0 if the unit test code is designed to be linked into an independent test executable.

#define USE_APPLICATION_UNIT_TEST 1


#import <UIKit/UIKit.h>

@interface NSString (encrypto)

+ (NSString *) md5:(NSString *)str;
+(NSData*) hexToBytes:(NSString *)string ;
+(NSString*)sha1:(NSString *)string;
+ (NSString *) sha1_base64:(NSString *)string;
+ (NSString *)charStringToNormalString:(NSString *)string;
+(NSString *)normalStringToAddCharString:(NSString *)string;
@end
