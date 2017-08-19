# Arduino-Rotary-Switch
1x12 rotary switch status library for Arduino
This library gives 1x12 rotary switch status.

Only 1 Function contains:

getRotaryRes(uint8_t pin);

Correct output:  0 to 11
While turning : 12 (Sometimes happens)

Maybe work after connect resistor below:
(tested few times...)
 Pullup: 4.7k ohm
 1 - 2 :  470 ohm
 2 - 3 :  470 ohm
 3 - 4 :  220 ohm and  470 ohm
 4 - 5 :  470 ohm and  470 ohm
 5 - 6 :   1k ohm
 6 - 7 :  220 ohm and   1k ohm
 7 - 8 : 2.2k ohm
 8 - 9 :   1k ohm and 2.2k ohm
 9 - 10: 4.7k ohm
10 - 11: 2.2k ohm and  10k ohm
11 - 12:  47k ohm
And some wires
