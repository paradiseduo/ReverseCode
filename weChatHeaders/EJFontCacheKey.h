//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class EJFontDescriptor;

@interface EJFontCacheKey : NSObject <NSCopying>
{
    EJFontDescriptor *descriptor;
    float lineWidth;
    int normalizedContentScale;
    unsigned long long hash;
}

+ (id)keyWithDescriptor:(id)arg1 lineWidth:(float)arg2 contentScale:(float)arg3;
@property(readonly) int normalizedContentScale; // @synthesize normalizedContentScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end
