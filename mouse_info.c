#include <stdio.h>
#include <string.h>
#include <X11/Xlib.h>

int main() {

    Display *dsp = XOpenDisplay(NULL);
    if(!dsp){
        return 1;
    }
    int screenNumber = DefaultScreen(dsp);

    XEvent event;

    XQueryPointer(dsp, RootWindow(dsp, DefaultScreen(dsp)),
        &event.xbutton.root, &event.xbutton.window,
        &event.xbutton.x_root, &event.xbutton.y_root,
        &event.xbutton.x, &event.xbutton.y,
        &event.xbutton.state
    );
    
    printf("Mouse Coordinates: %d %d\n", event.xbutton.x, event.xbutton.y);
    
    XCloseDisplay(dsp);

    return 0;

}