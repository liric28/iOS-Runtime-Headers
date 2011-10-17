/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBCompiledFilter : NSObject  {
    unsigned int _program;
    unsigned int _vao;
    unsigned int _vbo;
    unsigned int *_uniforms;
    int _uniformCount;
}

@property(readonly) int uniformCount;
@property(readonly) unsigned int* uniforms;
@property(readonly) unsigned int program;


- (id)initWithProgram:(unsigned int)arg1 uniforms:(unsigned int*)arg2 uniformCount:(int)arg3;
- (int)uniformCount;
- (unsigned int*)uniforms;
- (unsigned int)program;
- (void)dealloc;

@end