#include <Arduino.h>
#include <Servos.h>

void loop() {
for (int i = 0; i < 40; i++){                   //правая нога 1, правая нога 3, левая нога 2 вперед
    right_sustav_1.write(35);
    right_sustav_3.write(35);
    left_sustav_2.write(155);
    right_plecho_1.write(start_angle_plecho + i);
    right_plecho_3.write(start_angle_plecho + i);
    left_plecho_2.write(start_angle_plecho - i);
    delay(15);
}
for (int i = 0; i < 40; i++ ){                  //правая нога 1, правая нога 3, левая нога 2 в старт
    right_sustav_1.write(start_angle_rightsustav);
    right_sustav_3.write(start_angle_rightsustav);
    left_sustav_2.write(start_angle_leftsustav);
    right_plecho_1.write(135 - i);
    right_plecho_3.write(135 - i);
    left_plecho_2.write(45 + i);
    delay(15);
}
for (int i = 0; i < 45; i++){                  //левая нога 1, левая нога 3, правая нога 2 вперед
    left_sustav_1.write(155);
    left_sustav_3.write(155);
    right_sustav_2.write(35);
    left_plecho_1.write(start_angle_plecho - i);
    left_plecho_3.write(start_angle_plecho - i);
    right_plecho_2.write(start_angle_plecho + i);
    delay(15);
}
for (int i = 0; i < 40; i++){                  //левая нога 1, левая нога 3, правая нога 2 в старт
    left_sustav_1.write(start_angle_leftsustav);
    left_sustav_3.write(start_angle_leftsustav);
    right_sustav_2.write(start_angle_rightsustav);
    right_plecho_1.write(start_angle_plecho - i);
    right_plecho_3.write(start_angle_plecho - i);
    left_plecho_2.write(start_angle_plecho + i);
    left_plecho_1.write(45 + i);
    left_plecho_3.write(45 + i);
    right_plecho_2.write(135 - i);
    delay(15);
}
/*for (int i = 0; i < 40; i++){
    right_sustav_1.write(35);
    right_sustav_3.write(35);
    left_sustav_2.write(155);
    right_plecho_1.write(45 + i);
    right_plecho_3.write(45 + i);
    left_plecho_2.write(135 - i);
    left_plecho_1.write(start_angle_plecho + i);
    left_plecho_3.write(start_angle_plecho + i);
    right_plecho_2.write(start_angle_plecho - i);
    delay(15);
}
for (int i = 0; i < 40; i++){
    left_plecho_1.write(135 - i);
    left_plecho_3.write(135 - i);
    right_plecho_2.write(45 - i);
    delay(15);
}*/
}


