/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _categories;
    unsigned int  _types;
}

@property (nonatomic, readonly, copy) NSSet *categories;
@property (nonatomic, readonly) unsigned int types;

+ (id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2;
+ (id)settingsForTypes:(unsigned int)arg1 categories:(id)arg2;
+ (id)settingsForUserNotificationTypes:(unsigned int)arg1 userNotificationActionSettings:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)allowedUserNotificationTypes;
- (id)categories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypes:(unsigned int)arg1 categories:(id)arg2;
- (id)initWithUserNotificationTypes:(unsigned int)arg1 userNotificationActionSettings:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mayPresentUserNotificationOfType:(unsigned int)arg1;
- (unsigned int)types;
- (id)userNotificationActionSettings;
- (id)validatedSettings;

@end
