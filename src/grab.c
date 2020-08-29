/**
 * @file grab.c
 * @author Joe Wingbermuehle
 * @author Xin Li
 *
 * @brief Functions for managing server grabs.
 *
 */

#include "xwm.h"
#include "main.h"

static unsigned int grabCount = 0;

/** Grab the server and sync. */
void GrabServer(void)
{
   if(grabCount == 0) {
      JXGrabServer(display);
      JXSync(display, False);
   }
   grabCount += 1;
}

/** Ungrab the server. */
void UngrabServer(void)
{
   Assert(grabCount > 0);
   grabCount -= 1;
   if(grabCount == 0) {
      JXUngrabServer(display);
   }
}

