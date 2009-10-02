
#include "glwindow.h"

NSWindow *current_window;
void window_resize(int, int, int, int);

@implementation MainOpenGLWindow
-(id) initWithContentRect:(NSRect)contentRect
				styleMask:(unsigned int)aStyle
				backing:(NSBackingStoreType)bufferingType
				defer:(BOOL)flag {
	NSWindow *window = [super initWithContentRect:contentRect
							  styleMask:NSBorderlessWindowMask
							  backing:bufferingType
							  defer:flag];
    [window setLevel:NSFloatingWindowLevel];

	//[window setOpaque:NO];
	//[window setAlphaValue:0.6];
	//[window setAcceptsMouseMovedEvents:YES];

    current_window = window;
	return window;
}
@end

void window_show() {
    [[NSApplication sharedApplication] unhide:current_window];
}

void window_hide() {
    [[NSApplication sharedApplication] hide:current_window];
}

void window_close() {
    [[NSApplication sharedApplication] terminate:current_window];
}

void window_resize(int x, int y, int width, int height) {
    NSWindow *window = current_window;
    NSRect frame = [[window screen] visibleFrame];
    [window setFrame:NSMakeRect(0, 0, width, height) display:NO animate:NO];
    [window setFrameTopLeftPoint:NSMakePoint(x, frame.size.height-y)];
    window_show();
}
