/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SSMutableURLRequestProperties, SSURLRequestProperties, UIImage;

@interface SUPageSection : NSObject {
    double _expirationTime;
    NSString *_identifier;
    UIImage *_image;
    int _structuredPageType;
    NSString *_title;
    SSMutableURLRequestProperties *_urlRequestProperties;
    id _userInfo;
}

@property(copy) SSURLRequestProperties * URLRequestProperties;
@property double expirationTime;
@property(retain) NSString * identifier;
@property(retain) UIImage * image;
@property(readonly) id segmentedControlItem;
@property int structuredPageType;
@property(retain) NSString * title;
@property(retain) id userInfo;

- (id)URLRequestProperties;
- (void)_setURL:(id)arg1;
- (void)_setURLBagKey:(id)arg1;
- (void)dealloc;
- (double)expirationTime;
- (id)identifier;
- (id)image;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)loadFromDictionary:(id)arg1;
- (id)segmentedControlItem;
- (void)setExpirationTime:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setStructuredPageType:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setURLRequestProperties:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (int)structuredPageType;
- (id)title;
- (id)userInfo;

@end