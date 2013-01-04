/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class BRMetadataPreviewController, BRSegmentedSortControl, NSArray;

@interface BRTVShowsController : BRMediaMenuController <BRMenuListItemProvider>
{
    NSArray *_headerRows;
    NSArray *_mediaAssets;
    NSArray *_mediaCollections;
    BRSegmentedSortControl *_sortWidget;
    BRMetadataPreviewController *_cachedMDController;
    int _sortState;
}

- (id)initWithError:(id *)fp8;
- (void)dealloc;
- (BOOL)shouldRefreshForUpdateToObject:(id)fp8;
- (id)musicStoreBaseType;
- (BOOL)isVolatile;
- (void)refreshControllerForModelUpdate;
- (id)loadModelData;
- (long)defaultIndex;
- (void)itemSelected:(long)fp8;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (id)titleForRow:(long)fp8;
- (float)heightForRow:(long)fp8;
- (BOOL)rowSelectable:(long)fp8;
- (id)previewControlForItem:(long)fp8;
- (BOOL)brEventAction:(id)fp8;

@end
