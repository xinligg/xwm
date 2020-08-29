XWM (X light Window Manager)
==============================================================================

XWM is a light-weight window manager forked from jwm for the X11 Window System.

Requirements
------------------------------------------------------------------------------
To build XWM you will need a C compiler (gcc works), X11, and the
"development headers" for X11 and Xlib.
If available and not disabled at compile time, XWM will also use
the following libraries:

 - cairo and librsvg2 for SVG icons and backgrounds.
 - fribidi for bi-directional text support.
 - libjpeg for JPEG icons and backgrounds.
 - libpng for PNG icons and backgrounds.
 - libXext for the shape extension.
 - libXrender for the render extension.
 - libXmu for rounded corners.
 - libXft for anti-aliased and true type fonts.
 - libXinerama for multiple head support.
 - libXpm for XPM icons and backgrounds.

Installation
------------------------------------------------------------------------------

 0. For building from the git repository, run "./autogen.sh".
 1. Run "./configure --help" for configuration options.
 2. Run "./configure [options]"
 3. Run "make" to build XWM.
 4. Run "make install" to install XWM.  Depending on where you are installing
    XWM, you may need to perform this step as root ("sudo make install").

License
------------------------------------------------------------------------------
See LICENSE for GPLv2 license information.
