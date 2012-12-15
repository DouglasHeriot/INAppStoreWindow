//
//  SampleAppAppDelegate.h
//  SampleApp
//
//  Created by Indragie Karunaratne on 11-02-23.
//  Copyright 2011 Indragie Karunaratne. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "INAppStoreWindow.h"

@interface SampleAppAppDelegate : NSObject <NSApplicationDelegate>

@property (unsafe_unretained) IBOutlet NSPanel *sheet;
@property (unsafe_unretained) IBOutlet INAppStoreWindow *window;
@property (unsafe_unretained) IBOutlet NSButton *centerFullScreen;
@property (unsafe_unretained) IBOutlet NSButton *centerTrafficLight;
@property (unsafe_unretained) IBOutlet NSButton *verticalTrafficLight;
@property (unsafe_unretained) IBOutlet NSSlider *fullScreenRightMarginSlider;
@property (unsafe_unretained) IBOutlet NSSlider *trafficLightLeftMargin;
@property (unsafe_unretained) IBOutlet NSButton *showsBaselineSeparator;
@property (nonatomic, strong) NSMutableArray *windowControllers;

- (IBAction)createWindowController:(id)sender;
- (IBAction)checkboxAction:(id)sender;
- (IBAction)sliderAction:(id)sender;

- (IBAction)showSheetAction:(id)sender;
- (IBAction)doneSheetAction:(id)sender;

@end
