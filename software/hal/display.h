/*
 ##############################################################################
 #                                                                            #
 #    This file is part of PixelDungeon.                                      #
 #                                                                            #
 #    PixelDungeon is free software: you can redistribute it and/or modify    #
 #    it under the terms of the GNU General Public License as published by    #
 #    the Free Software Foundation, either version 3 of the License, or       #
 #     (at your option) any later version.                                    #
 #                                                                            #
 #    PixelDungeon is distributed in the hope that it will be useful,         #
 #    but WITHOUT ANY WARRANTY; without even the implied warranty of          #
 #    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           #
 #    GNU General Public License for more details.                            #
 #                                                                            #
 #    You should have received a copy of the GNU General Public License       #
 #    along with PixelDungeon.  If not, see <http://www.gnu.org/licenses/>.   #
 #                                                                            #
 ##############################################################################
*/

/**
 *	@author Alexandre Aubin
 *  @brief Display-related definitions
*/

#ifndef HAL_DISPLAY_H_
#define HAL_DISPLAY_H_

#include "common.h"

// *********************************************************************
//                         Misc
// *********************************************************************

#define DISPLAY_WIDTH 8
#define DISPLAY_NPIX DISPLAY_WIDTH*DISPLAY_WIDTH
#define DISPLAY_PIXEL(x,y) ((y) + DISPLAY_WIDTH * (x))

// *********************************************************************
//                         Colors
// *********************************************************************

#define DISPLAYCOLOR_EMPTY      0
#define DISPLAYCOLOR_WHITE      1
#define DISPLAYCOLOR_RED        2
#define DISPLAYCOLOR_GREEN      3
#define DISPLAYCOLOR_BLUE       4
#define DISPLAYCOLOR_YELLOW     5
#define DISPLAYCOLOR_MAGENTA    6
#define DISPLAYCOLOR_CYAN       7
#define DISPLAYCOLOR_ORANGE     8
#define DISPLAYCOLOR_VIOLET     9
#define DISPLAYCOLOR_KINGBLUE   10
#define DISPLAYCOLOR_LIGHTGREEN 11
#define DISPLAYCOLOR_RED_HIGH   12
#define DISPLAYCOLOR_RED_MEDIUM 13
#define DISPLAYCOLOR_RED_LOW    14

#define DISPLAYCOLOR_WAITUNIT delayMicroseconds(150)

// *********************************************************************
//                         IO config (pin numbers)
// *********************************************************************

#define X0 A2
#define X1 A1
#define X2 A0
#define Y0 A5
#define Y1 A4
#define Y2 A3

#define REDLED   8
#define GREENLED 9
#define BLUELED  10

// *********************************************************************
//                           Current display
// *********************************************************************

extern int currentPixel;
extern int currentDisplay[DISPLAY_NPIX];

// *********************************************************************
//                           Prototypes
// *********************************************************************

void displayRefreshNextPixel();
void displayColor(int color);

#endif
