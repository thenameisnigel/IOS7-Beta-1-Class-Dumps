/* NewcastleEnvironmentPicker.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BuddyController.h"

@class SetMobileMeServerSettings, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface NewcastleEnvironmentPicker : XXUnknownSuperclass <BuddyController, UIAlertViewDelegate> {
	SetMobileMeServerSettings* _serverSettingsController;
	UIActivityIndicatorView* _spinner;
	BOOL _settingUpServer;
	BOOL _environmentSwitchCancelled;
	id _delegate;
}
-(id)controllerForSpecifier:(id)specifier;
-(id)setEnvironmentFromSpecifier:(id)specifier DNSOnly:(BOOL)only;
-(void)waitForLaunchdJobToComplete:(id)complete;
-(int)switchToAOSEnvironmentNamed:(id)aosenvironmentNamed error:(id*)error;
-(void)setEnvironmentConfiguration:(id)configuration forServiceNamed:(id)serviceNamed;
-(id)configurationURLForEnvironmentName:(id)environmentName error:(id*)error;
-(BOOL)shouldCancelSwitchingToEnvironmentDictionary:(id)environmentDictionary;
-(void)_showShouldCancelAlertForEnvironment:(id)_show;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)stopSpinnerInCell:(id)cell;
-(void)startSpinnerInCell:(id)cell;
-(id)specifiers;
-(id)envSpecifiersUnderSpecifier:(id)specifier;
-(void)dealloc;
-(void)viewDidLoad;
-(void)controllerDone;
-(void)setDelegate:(id)delegate;
@end