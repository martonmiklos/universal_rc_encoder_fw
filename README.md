
Timer1 is used to send events for the frame start periods.

Timer2 is used as a 1us tick timer. 
In the mail loop the signalBuffer is parsed:
- At each read the encoded signal will be toggled
- The buffer amount of us to be waited
- The encoded line toggled again

After the whole signalBuffer got serialized the main will wait for the Timer1 which will be overflown on every 30 ms. At the overflow event the ADC channels will be read and the signalBuffer will be recalculated afterwards.
