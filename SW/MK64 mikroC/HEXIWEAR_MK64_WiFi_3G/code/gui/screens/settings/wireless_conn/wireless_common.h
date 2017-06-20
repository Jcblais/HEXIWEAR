// File: wifi.h

// Declarations of main functionalities in the wifi gui module.

#ifndef _wireless_h_
#define _wireless_h_

////////////////////////////////////////////////////////////////////////////////
// Header file inclusions.                                                    //
////////////////////////////////////////////////////////////////////////////////

#include "gui_driver.h"

////////////////////////////////////////////////////////////////////////////////
// Macro definitions.                                                         //
////////////////////////////////////////////////////////////////////////////////

#define WIFI_STACK_SIZE ( 0x500 )
#define WIFI_PRIO       ( HEXIWEAR_GUI_PRIO )

////////////////////////////////////////////////////////////////////////////////
// Type definitions.                                                          //
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Global variable declarations.                                              //
////////////////////////////////////////////////////////////////////////////////

// screens
extern guiScreen_t wirelessScreen;
extern const uint8_t wifi_icon_off_bmp[ 4806 ];
extern const uint8_t wifi_icon_on_bmp[ 4806 ];
extern const uint8_t none_icon_bmp[4806] ;

extern const uint8_t g3_icon_off_bmp[4806] ;
extern const uint8_t g3_icon_on_bmp[4806] ;
extern const uint8_t wifi_screen_bmp[ OLED_GRAM_SIZE + 6 ];

extern guiImage_t wireless_icon;


#endif