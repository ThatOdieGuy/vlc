/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRCenteredMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@interface BRSettingsiTunesPairingWarningController : BRCenteredMenuController <BRMenuListItemProvider>
{
    int _type;
}

+ (id)warningControllerForTurningOffSync;
+ (id)warningControllerForChangingSyncHost;
- (void)itemSelected:(long)fp8;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (id)titleForRow:(long)fp8;
- (float)heightForRow:(long)fp8;
- (BOOL)rowSelectable:(long)fp8;

@end
