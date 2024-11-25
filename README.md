
This code controls six LEDs to blink at different time intervals. It uses the millis() function to calculate the elapsed time and switches the LED states based on different time periods (1 second, 5 seconds, 10 seconds, 15 seconds, 30 seconds, and 60 seconds). Each LED blinks periodically within its specified time period, for example, the LED representing 1 second will stay on for 0.5 seconds and off for 0.5 seconds. The code continuously checks the current time and controls the LED states according to the defined time periods.

(I originally tried to divide six LEDs into two parts. Three of them would use analogWrite() to display cycles of 5 seconds, 10 seconds, and 15 seconds each. The other three would indicate the number of time cycles that have passed (up to a maximum of one minute) by varying their blinking frequency. I don't know why both parts work fine when tested separately, but when combined, the brightness variation of the breathing lights becomes very faint.)

![image](https://github.com/user-attachments/assets/7179df87-c5e3-423c-a100-75ee080ddc7a)
