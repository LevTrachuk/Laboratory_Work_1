#include "BMP.h"

int main() {

    BMP bmp1("im.bmp");
    //Процесс поворота на 90 градусов по часовой стрелке
    bmp1.rotate_clockwise_90();
    bmp1.write("output_clockwise.bmp");

    BMP bmp2("im.bmp");
    //Процесс поворота на 90 градусов против часовой стрелки
    bmp2.rotate_counterclockwise_90();
    bmp2.write("output_counterclockwise.bmp");

    return 0;
}
