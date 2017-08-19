# Arduino-Rotary-Switch<br>
1x12 rotary switch status library for Arduino<br>
This library gives 1x12 rotary switch position.

Only 1 Function contains:<br>
* getRotaryRes(uint8_t pin);<br>

Correct output:  0 to 11<br>
While turning : 12 (Sometimes happens)  

Maybe work after connect resistor below:<br>
(tested few times...)<br>
 Pullup: 4.7k ohm<br>
 1 - 2 :  470 ohm<br>
 2 - 3 :  470 ohm<br>
 3 - 4 :  220 ohm and  470 ohm<br>
 4 - 5 :  470 ohm and  470 ohm<br>
 5 - 6 :   1k ohm<br>
 6 - 7 :  220 ohm and   1k ohm<br>
 7 - 8 : 2.2k ohm<br>
 8 - 9 :   1k ohm and 2.2k ohm<br>
 9 - 10: 4.7k ohm<br>
10 - 11: 2.2k ohm and  10k ohm<br>
11 - 12:  47k ohm<br>
And some wires
