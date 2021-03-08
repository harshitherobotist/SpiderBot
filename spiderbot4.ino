#include<Servo.h>
Servo leg_1x;
Servo leg_1y;
Servo leg_2x;
Servo leg_2y;
Servo leg_3x;
Servo leg_3y;
Servo leg_4x;
Servo leg_4y;
int servo_pos=0;
void setup() {
  // put your setup code here, to run once:
leg_1x.attach(5);
leg_1y.attach(4);
leg_2x.attach(6);
leg_2y.attach(7);
leg_3x.attach(10);
leg_3y.attach(11);
leg_4x.attach(8);
leg_4y.attach(9);
zeros();
}

void loop() {
leg_1y.write(75);
leg_1x.write(0);
leg_3y.write(75);
leg_3x.write(100);
delay(100);
leg_1y.write(120);
leg_3y.write(120);
delay(100);
leg_1x.write(120);
leg_3x.write(0);
delay(100);


leg_2y.write(75);
leg_2x.write(120);
leg_4y.write(75);
leg_4x.write(0);
delay(100);
leg_2y.write(120);
leg_4y.write(120);
delay(100);
leg_2x.write(0);
leg_4x.write(100);
delay(100);


}
void zeros()
{
leg_1x.write(90);
leg_1y.write(85);
leg_2x.write(90);
leg_2y.write(95);
leg_3x.write(90);
leg_3y.write(90);
leg_4x.write(95);
leg_4y.write(90);
}
