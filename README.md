# IoT NeoPixel badge for GSP

*By @trianglegrrl; effects based on the tweaking4all post linked below.*

This uses an Adafruit HUZZAH ESP8266 breakout to control a Neopixel 12-pixel ring. Soon there will
be an API!

If you're a GSP student and want to know more, come find somebody in the iLab.

## Lazzoring instructions

The Adobe Illustrator file provides a template for laser cutting the badges. It is confirmed working on the Trotec Speedy 3000 laser cutter.

**NOTE** You must be trained on the laser cutter to use it!

You'll have to drill your own holes; we left them off of the badge so you could do whatever you wanted with it. Luckily, we have a drill press!

## Wiring instructions

 - Solder your headers onto the HUZZAH (or not, but if you solder directly to the HUZZAH, you'll end up regretting it)
 - Connect the NeoPixel GND to one of the HUZZAH's GND pins.
 - Connect the NeoPixel PWR pin to the HUZZAH's 3V pin
 - Connect the NeoPixel's DATA pin to the HUZZAH's pin 14
 - Connect GND (black) of a 3.7V LiPo battery to the other GND pin of the HUZZAH
 - Connect V+ (red) of the 3.7V LiPo battery to the VBat pin of the HUZZAH

## Programming instructions
 - Connect the programming cable to the HUZZAH.
 - Put the HUZZAH into programming mode by holding down the GPIO pin and pressing the reset pin, then releasing both pins. The red light will be much dimmer, and that's how you know it's in programming mode.
 - On your computer Set up the Arduino IDE to communicate with the HUZZAH. *Note: You might need to download FTDI drivers for your computer to see the HUZZAH.*
 - Upload the "Alaina_GSP_Badge.ino" sketch to the HUZZAH.
 - Now: der blinkenlights.

Happy badge hacking! -- @trianglegrrl

## Useful links

 - Effects from http://www.tweaking4all.com/hardware/arduino/adruino-led-strip-effects/
 - ESP8266 NeoPixel support: https://blog.adafruit.com/2015/06/30/updated-neopixel-support-for-esp8266-and-arduino-zero/
 - TNG font for the badge (already installed on the lazzor computer): http://www.fonts2u.com/federation-tng-title.font
 - Setting up Arduino IDE to use the ESP8266: http://www.instructables.com/id/ESP8266-controlling-Neopixel-LEDs-using-Arduino-ID/step2/Code-and-programming/
 - Adafruit HUZZAH: https://www.adafruit.com/products/2471
 - 12-LED NeoPixel ring: https://www.adafruit.com/products/1643

