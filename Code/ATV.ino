Importing servo library;
Declaring voltages high and low;
Initializing high as 255 and low as 240;
Declaring servo pin;
Declaring object servo → 0;
Declaring character command
↦ Setup
Intestating servo with Arduino;
Setting pin modes for motor gears as Output;
Setting pin modes for Camera as Input;
↦ Setup end
↦ Loop
Setting servo angle to 450;
Declaring servo motion for 1000 ms;
Setting servo angle to 900
;
Delaying servo motion for 1000 ms;
Setting servo angle to 1350
;
Delaying servo motion for 100 ms;
For servo angle i=0~100, i++
Setting servo angle to I;
Delaying servo motion for 50 ms;
For servo angle i=180~0, i--
Setting servo angle to I;
Delaying servo motion for 10 ms;
If BI signal available>0
Then command= read from Bluetooth;
If command= ‘F’
Performing method forward();
Break;
Performing method backward();
Break;
Performing method left();
Break;
Performing method right();
Break;
↦ Loop end

↦ Forward
Writing high on pin 10
Writing low on pin 11
Writing high on pin 9
Writing low on pin 6
Writing pwm speedA on pin 5
Writing pwm speedB on pin 3
↦ Forward end

↦ Backward
Writing high on pin 10
Writing low on pin 11
Writing high on pin 9
Writing low on pin 6
Writing pwm speedA on pin 8
Writing pwm speedB on pin 3
↦ Backward end
↦ Right
Writing high on pin 10
Writing low on pin 11
Writing high on pin 9
Writing low on pin 6
Writing pwm speedA on pin 3
Writing pwm speedB on pin 5
↦ Right end
↦ Left
Writing high on pin 10
Writing low on pin 11
Writing high on pin 9
Writing low on pin 6
Writing pwm speedA on pin 3
Writing pwm speedB on pin 5
↦ Left end

↦ Motors_stop
Writing 0 on pin 11
Writing 0 on pin 10
Writing 0 on pin 9
Writing 0 on pin 6
Writing 0 on pin 5
Writing 0 on pin 3
↦ Motors_stop end