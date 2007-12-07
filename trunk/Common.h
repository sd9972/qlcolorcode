/*
 *  Common.h
 *  QLColorCode
 *
 *  Created by Nathaniel Gray on 12/6/07.
 *  Copyright 2007 Nathaniel Gray. All rights reserved.
 *
 */
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#ifdef DEBUG
#define n8log(...) NSLog(__VA_ARGS__)
#else
#define n8log(...)
#endif

// Status is 0 on success, nonzero on error (like a shell command)
// If thumbnail is 1, only render the top 50 lines of the file
NSData *colorizeURL(CFBundleRef myBundle, CFURLRef url, int *status,
                    int thumbnail);
