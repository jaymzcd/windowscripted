# Window script stuff

I want to control some UI items using python. I can find a fair amount to do with
hooking into win32 controls using ctypes, less so with linux (which surprises me).
The C code here outputs the current mouse position - I'm then gonna store that
and use it as an input to xdotool - which is pretty easy. Then there's no dependancies
and I can use some bash to click around after recording input.

This is awfully rough and there's probably something better. Am thinking of Selenium
but this is a nice distraction and re-learning of C stuff & some Xlib.

