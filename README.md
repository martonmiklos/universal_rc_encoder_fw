# Firmware for the [Universal RC encoder circuit](https://github.com/martonmiklos/universal_rc_encoder)
Firmware for the STM8S003 based universal RC encoder circuit

Written in C using the Cosmic C compiler.

Supported protocols:
 * [Nikko C1069C](http://users.atw.hu/balubati/blog/index.php?entry=entry180227-205500)
 * Standard PPM
 * [TX2](https://www.hobbielektronika.hu/forum/getfile.php?id=100402)

## Calibration

Since in most transmitters the potentiometers not used with full range there is a feature to calibrate the range.

To perform the calibration cycle the cal button needs to be pressed when the circuit got powered.

Then all sticks needs to be moved between the two ends and should be centered then.

When releasing the cal button the end values stored to the EEPROM.

 
## Implementation details

Timer1 is used to send events for the frame start periods (with 30 ms interval now).
Timer2 is used as a 1us tick timer. 

When a frame peroid is started the ADC channels scanned.

Then the encoding rutine outputs the encoded digital waveform to the signalBuffer array.

Then in the main loop the signalBuffer is parsed:
 * At each read the encoded signal will be toggled
 * The buffer amount of us to be waited
 * The encoded line toggled again
