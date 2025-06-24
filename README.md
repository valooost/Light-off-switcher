# Light-off-switcher
Tired that your mom wakes you up with this brutal switching-the-light-on? My Idea came from [this Video](https://www.youtube.com/watch?v=XNcZpjLA3yI) (2:47), when a random guy presented this. I don't know who this is, but he's a hero.
You may need:
* Arduino Unor R3 Board
* Prototype Shield (v.5)
* Supersonic Sensor HC-SR04
* MicroServo SG90
* A lot of cables and patience
________________________________________________________________________________________________________________________________
## June 20th, 10:11  
Well, because I am a foolish at IoT, I'll try (as first step) to let the light switch off with an input from a Supersonic Sensor.
Wish me luck!
________________________________________________________________________________________________________________________________
## June 20th, 10:57  
After a small breakfast (i got up late) I finished my first code, and connnected the Supersonic Sensor.

![SS-Sensor connect](https://github.com/user-attachments/assets/64cf7565-8ab5-4add-918b-5b5d57c22de2)

VCC - 5V  
Trig(ger) - Pin 7  
Echo - Pin 6  
GND - GND  
________________________________________________________________________________________________________________________________
## June 20th, 11:13  
I think I finished the whole code! (That was faster than expected)
Now, when the Supersonic-Sensor detects something under 100cm of distance, e.g. a waving hand, it moves the Servo to switch the light off.
Next step would be to match them to the board...

![Servo Connect](https://github.com/user-attachments/assets/dcba93c6-3719-4a8e-b0d1-88b27194d820)

Brown Cable - GND  
Red Cable - 5V  
Yellow Cable - Pin 8
________________________________________________________________________________________________________________________________
## June 22d, 10:29
After a longer break I was able to connect the SS-Sensor and the Servo to the perfect position with the board - wit a hot glue gun (Some of you might cry in pain).

![both-glued](https://github.com/user-attachments/assets/6b94b420-e894-4811-b703-2d2bee55c992)

Only the fastening to the wall right next to the switch is left!
________________________________________________________________________________________________________________________________
## June 23th, 16:48
Another long break, but this time, we have Sound now!
I don't know why, I realise it's dumb. Let's see how it works.

![speaker](https://github.com/user-attachments/assets/863a4bfb-462b-4c02-8493-298bff4778ac)

Connect the Piezo Speaker to Pin 9
________________________________________________________________________________________________________________________________
## June 24th, 8:35
Let's cut this crap out.
________________________________________________________________________________________________________________________________
