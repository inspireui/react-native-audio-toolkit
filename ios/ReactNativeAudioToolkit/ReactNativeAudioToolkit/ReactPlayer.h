//
//  ReactPlayer.h
//  ReactNativeAudioToolkit
//
//  Created by Oskar Vuola on 20/07/16.
//  Copyright © 2016 Futurice. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#if __has_include(<React/RCTEventDispatcher.h>)
#import <React/RCTEventDispatcher.h>
#else
#import "RCTEventDispatcher.h"
#endif


@interface ReactPlayer : AVPlayer

@property (readwrite) BOOL autoDestroy;
@property (readwrite) BOOL looping;

@end
