/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2004 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public
    License along with this library; if not, write to the Free
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Sam Lantinga
    slouken@libsdl.org
*/


/*
 *	PS2 keyboard events manager
 *
 *	Shazz / MJJ
 */

#ifndef _SDL_PS2_MOUSEEVENTS_H_
#define _SDL_PS2_MOUSEEVENTS_H_

#include "SDL_sysvideo.h"

/* Hidden "this" pointer for the video functions */
#define _THIS	SDL_VideoDevice *this

extern void PS2_PumpMouseEvents(_THIS);
extern int PS2_InitMouse(_THIS);
extern void PS2_UpdateMouse(_THIS);

#endif /* _SDL_PS2_MOUSEEVENTS_H_ */
