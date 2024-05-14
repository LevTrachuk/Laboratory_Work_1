#include "BMP.h"

int main() {

    BMP img1("image_.bmp");
    //Процесс поворота на 90 градусов по часовой стрелке
    img1.rotate_clockwise_90();
    img1.write("output_clockwise.bmp");

    BMP img2("image_.bmp");
    //Процесс поворота на 90 градусов против часовой стрелки
    img2.rotate_counterclockwise_90();
    img2.write("output_counterclockwise.bmp");

    return 0;
}
