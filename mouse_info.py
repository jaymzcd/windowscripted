#!/usr/bin/env python2
import Xlib
import Xlib.display

# Quick in dirty event polling via Xlib

def main():
    display = Xlib.display.Display(':0')
    root = display.screen().root
    root.change_attributes(event_mask=
        Xlib.X.ButtonPressMask | Xlib.X.ButtonReleaseMask)

    while True:
        event = root.display.next_event()
        print event

if __name__ == "__main__":
    main()