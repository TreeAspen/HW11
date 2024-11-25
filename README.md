

I originally tried to divide six LEDs into two parts. Three of them would use analogWrite() to display cycles of 5 seconds, 10 seconds, and 15 seconds each. The other three would indicate the number of time cycles that have passed (up to a maximum of one minute) by varying their blinking frequency. I don't know why both parts work fine when tested separately, but when combined, the brightness variation of the breathing lights becomes very faint.

![image](https://github.com/user-attachments/assets/7179df87-c5e3-423c-a100-75ee080ddc7a)
