/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTInvalidation-Protocol.h"
#import "NSObject-Protocol.h"

@class DVTSourceExpression;

@protocol DVTSourceExpressionSource <NSObject, DVTInvalidation>
@property(readonly) DVTSourceExpression *contextMenuExpression;
@property(readonly) struct CGRect currentSelectionFrame;
@property(readonly) DVTSourceExpression *mouseOverExpression;
@property(readonly) DVTSourceExpression *selectedExpression;

@optional
@property(readonly) DVTSourceExpression *quickHelpExpression;
- (void)registerMouseOverExpressionObserver:(id)arg1;
- (void)registerSelectedExpressionObserver:(id)arg1;
- (void)unregisterMouseOverExpressionObserver:(id)arg1;
- (void)unregisterSelectedExpressionObserver:(id)arg1;
@end

