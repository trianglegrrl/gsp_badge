// Adapted from the awesome tutorial at
// http://www.tweaking4all.com/hardware/arduino/adruino-led-strip-effects/

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 14 // Data pin for NeoPixel

#define NUM_LEDS 12 // Number of LEDs in the strip/ring

#define MAX_INTENSITY 100 // Maximum intensity for each GRB value
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
	strip.begin();

	strip.show();
	strip.setBrightness(MAX_INTENSITY);
}

void setPixel(int Pixel, byte red, byte green, byte blue) {
	strip.setPixelColor(Pixel, strip.Color(red, green, blue));
}

void setAll(byte red, byte green, byte blue) {
	for(int i = 0; i < NUM_LEDS; i++ ) {
		setPixel(i, red, green, blue);
	}

	strip.show();
}

void loop() {
	twinkleRandom(20, 100, false);
}

void twinkleRandom (int count, int speedDelay, boolean onlyOne) {
	setAll(0, 0, 0);
	for (int i=0; i < count; i++) {
		setPixel(random(NUM_LEDS), random(0, 100), random(0, 100), random(0, 100));
	}

	strip.show();

	delay(speedDelay);

	if (onlyOne) {
		setAll(0, 0, 0);
	}

	delay(speedDelay);
}