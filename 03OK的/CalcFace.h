@class CalcBrain;

@interface CalcFace: NSWindow
{  

  NSButton *btns[16];
  NSTextField *display;
}
-(void)setBrain :(CalcBrain*)aBrain;

-(void)setDisplay :(NSString*)number;


// Set the corresponding brai
@end
