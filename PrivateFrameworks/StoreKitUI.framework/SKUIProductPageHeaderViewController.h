/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SKUIItemStateCenterObserver.h"
#import "UIPopoverControllerDelegate.h"

@class NSOperationQueue, SKUIClientContext, SKUIFacebookLikeStatus, SKUIItem, SKUIItemArtworkContext, SKUILoadURLOperation, SKUIProductPageHeaderFloatingView, SKUIProductPageHeaderView, SKUIProductPageItem, UIImage, UIPopoverController;

@interface SKUIProductPageHeaderViewController : UIViewController <SKUIItemStateCenterObserver, UIPopoverControllerDelegate>
{
    UIPopoverController *_activityPopoverController;
    SKUIItemArtworkContext *_artworkContext;
    SKUIClientContext *_clientContext;
    id <SKUIProductPageHeaderViewDelegate> _delegate;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIProductPageHeaderView *_headerView;
    UIImage *_iconImage;
    SKUIItem *_item;
    long long _itemIdentifier;
    SKUILoadURLOperation *_loadIconOperation;
    SKUILoadURLOperation *_loadUberOperation;
    NSOperationQueue *_operationQueue;
    UIImage *_placeholderImage;
    SKUIProductPageItem *_productPageItem;
    UIImage *_uberImage;
    BOOL _wantsActivityViewController;
    SKUIProductPageHeaderFloatingView *_floatingView;
    BOOL _performArtistActionOnLoad;
}

@property(readonly, nonatomic) SKUIProductPageHeaderFloatingView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property(copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus; // @synthesize facebookLikeStatus=_facebookLikeStatus;
@property(nonatomic) __weak id <SKUIProductPageHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_showActivityViewControllerFromView:(id)arg1;
- (void)_setUberWithImage:(id)arg1 error:(id)arg2;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (BOOL)_isRestricted;
- (id)_facebookFriendsString;
- (void)_destroyPopoverController;
- (id)_artworkContext;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)_shareButtonAction:(id)arg1;
- (void)_sectionControlAction:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_artistButtonAction:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)setProductPageItem:(id)arg1;
- (void)reloadData;
@property(readonly, nonatomic) UIImage *iconImage;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

