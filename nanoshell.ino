/*
  Adapted from the Adafruit graphicstest sketch.

  This sketch uses the GLCD font (font 1) only. Disable other fonts to make
  the sketch fit in an UNO!

  Make sure all the required fonts are loaded by editting the
  User_Setup.h file in the TFT_ST7735 library folder.

  If using an UNO or Mega (ATmega328 or ATmega2560 processor) then for best
  performance use the F_AS_T option found in the User_Setup.h file in the
  TFT_ST7735 library folder.

  The library uses the hardware SPI pins only:
   For UNO, Nano, Micro Pro ATmega328 based processors
      MOSI = pin 11, SCK = pin 13
   For Mega:
      MOSI = pin 51, SCK = pin 52

  The pins used for the TFT chip select (CS) and Data/command (DC) and Reset (RST)
  signal lines to the TFT must also be defined in the library User_Setup.h file.

  Sugested TFT connections for UNO and Atmega328 based boards
   sclk 13  // Don't change, this is the hardware SPI SCLK line
   mosi 11  // Don't change, this is the hardware SPI MOSI line
   cs   10  // Chip select for TFT display
   dc   9   // Data/command line
   rst  7   // Reset, you could connect this to the Arduino reset pin

  Suggested TFT connections for the MEGA and ATmega2560 based boards
   sclk 52  // Don't change, this is the hardware SPI SCLK line
   mosi 51  // Don't change, this is the hardware SPI MOSI line
   cs   47  // TFT chip select line
   dc   48  // TFT data/command line
   rst  44  // you could alternatively connect this to the Arduino reset

  #########################################################################
  ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
  ######       TO SELECT THE FONTS AND PINS YOU USE, SEE ABOVE       ######
  #########################################################################
*/

/*
   NanoShell - an Arduino operating shell.

   The *.ino file links all of the *.h files together, which makes the code.
   So technically everything can be placed in one file. You just have to be
   careful about where you place some things, as they may break.
*/

/*
  NanoShell - NANOSHELL.INO -> Header file link.

  Copyright (c) iProgramInCpp 2019.
  TFT_ST7735 Library (c) Adafruit Industries, Bodmer.
  SPI & EEPROM Library (c) Arduino.
*/

// External Libraries
#include <TFT_ST7735.h>
#include <SPI.h>
#include <EEPROM.h>

// ArduinOS includes:
#include "icons.h"
#include "screen.h"
#include "eeprom.h"
#include "debug.h"
#include "gamepad.h"
#include "misc.h"

// Applications
#include "demo.h"
#include "notepad.h"
#include "calculator.h"
#include "settings.h"
#include "cli.h"
#include "apps.h"

// Main functions
#include "avrdeff.h"
