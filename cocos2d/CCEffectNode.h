//
//  CCEffectNode.h
//  cocos2d-ios
//
//  Created by Oleg Osin on 3/26/14.
//
//

#import <Foundation/Foundation.h>

#import "ccMacros.h"
#import "CCNode.h"
#import "CCRenderTexture.h"
#import "CCSprite.h"
#import "CCTexture.h"
#import "CCEffect.h"
#import "CCEffectTexture.h"
#import "CCEffectStack.h"
#import "CCEffectColor.h"
#import "CCEffectColorPulse.h"
#import "CCEffectGlow.h"
#import "CCEffectBrightnessAndContrast.h"

#ifdef __CC_PLATFORM_IOS
#import <UIKit/UIKit.h>
#endif // iPHone


@interface CCEffectNode : CCRenderTexture

@property (nonatomic) CCEffect* effect;

-(id)initWithWidth:(int)w height:(int)h;

@end
