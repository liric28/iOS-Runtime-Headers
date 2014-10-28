/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray, TPPageLayout, TSDAbstractLayout, TSDLayoutGeometry;

@interface TSDAbstractLayout : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableArray *mChildren;
    TSDLayoutGeometry *mGeometry;
    } mInterimPosition;
    BOOL mInterimPositionXSet;
    BOOL mInterimPositionYSet;
    } mLastInterimPosition;
    BOOL mLastInterimPositionXSet;
    BOOL mLastInterimPositionYSet;
    TSDAbstractLayout *mParent;
}

@property(copy) NSArray * children;
@property(copy) TSDLayoutGeometry * geometry;
@property float interimPositionX;
@property float interimPositionY;
@property(readonly) struct CGPoint { float x1; float x2; } lastInterimPosition;
@property(readonly) unsigned int pageIndex;
@property(readonly) TPPageLayout * pageLayout;
@property TSDAbstractLayout * parent;
@property(readonly) TSDAbstractLayout * root;

- (void)addChild:(id)arg1;
- (void)addLayoutsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toArray:(id)arg2 deep:(BOOL)arg3;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameInRoot;
- (struct CGPoint { float x1; float x2; })alignmentFrameOriginForFixingInterimPosition;
- (BOOL)canRotateChildLayout:(id)arg1;
- (id)children;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clipRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedRectInRoot:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)exchangeChildAtIndex:(unsigned int)arg1 withChildAtIndex:(unsigned int)arg2;
- (void)fixTransformFromInterimPosition;
- (void)fixTransformFromLastInterimPosition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForCulling;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameInParent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameInRoot;
- (id)geometry;
- (id)geometryForTransforming;
- (id)geometryInParent;
- (id)geometryInRoot:(id)arg1;
- (id)geometryInRoot;
- (id)init;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })insertionFrame;
- (float)interimPositionX;
- (float)interimPositionY;
- (BOOL)isAxisAlignedUnflippedInRoot;
- (BOOL)isRootLayoutForInspectorGeometry;
- (struct CGPoint { float x1; float x2; })lastInterimPosition;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (void)offsetGeometryBy:(struct CGPoint { float x1; float x2; })arg1;
- (void)p_fixTransformFromInterimPosition:(struct CGPoint { float x1; float x2; })arg1 interimPositionXSet:(BOOL)arg2 interimPositionYSet:(BOOL)arg3;
- (unsigned int)pageIndex;
- (id)pageLayout;
- (id)parent;
- (id)parentLayoutForProvidingGuides;
- (struct CGPoint { float x1; float x2; })positionInRootForAttachmentPositioner;
- (BOOL)providesGuidesForChildLayouts;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInParent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInRoot:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromParent;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (id)root;
- (void)setChildren:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setInterimPositionX:(float)arg1;
- (void)setInterimPositionY:(float)arg1;
- (void)setParent:(id)arg1;
- (BOOL)shouldSnapWhileResizing;
- (BOOL)supportsFlipping;
- (BOOL)supportsInspectorPositioning;
- (BOOL)supportsParentRotation;
- (BOOL)supportsResize;
- (BOOL)supportsRotation;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformInParent;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformInRoot;
- (id)visibleGeometries;

@end