#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBRootListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>
#import <Cephei/HBPreferences.h>
#import <spawn.h>
#import <libimagepicker.h>
#import <LIPImageChooseCell.h>
#import "XENCommon.h"
#import "IconThemes.h"
#import "XENGIFCommon.h"
#import "GIFThemes.h"

@interface XENLeftListController : HBRootListController
- (void)setThemeName:(NSString *)name;
- (void)setGIFThemeName:(NSString *)name;
@end
