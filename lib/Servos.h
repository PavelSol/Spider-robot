#include <Arduino.h>
#include <Servo.h>

Servo   left_plecho_1, left_plecho_2, left_plecho_3,
        right_plecho_1, right_plecho_2, right_plecho_3,
        left_sustav_1, left_sustav_2, left_sustav_3,
        right_sustav_1, right_sustav_2, right_sustav_3,
        left_noga_1, left_noga_2, left_noga_3,
        right_noga_1, right_noga_2, right_noga_3;
Servo   dist;


void setup() {
        left_plecho_1.attach(36), left_plecho_2.attach(33), left_plecho_3.attach(30),
        right_plecho_1.attach(39), right_plecho_2.attach(51), right_plecho_3.attach(48),
        left_sustav_1.attach(37), left_sustav_2.attach(34), left_sustav_3.attach(32),
        right_sustav_1.attach(40), right_sustav_2.attach(52), right_sustav_3.attach(49),
        left_noga_1.attach(38), left_noga_2.attach(35), left_noga_3.attach(31),
        right_noga_1.attach(41), right_noga_2.attach(53), right_noga_3.attach(50);        
int     start_angle = 90;
        left_plecho_1.write(start_angle), left_plecho_2.write(start_angle), left_plecho_3.write(start_angle),
        right_plecho_1.write(start_angle), right_plecho_2.write(start_angle), right_plecho_3.write(start_angle),
        left_sustav_1.write(start_angle), left_sustav_2.write(start_angle), left_sustav_3.write(start_angle),
        right_sustav_1.write(start_angle), right_sustav_2.write(start_angle), right_sustav_3.write(start_angle),
        left_noga_1.write(start_angle), left_noga_2.write(start_angle), left_noga_3.write(start_angle),
        right_noga_1.write(start_angle), right_noga_2.write(start_angle), right_noga_3.write(start_angle);
}