#include <math.h>

#define PI 3.1416
#define MAX 180

int main()
{
    int angle;
    float x, y;

    angle = 0;
    printf("Angle  cos(angle)\n\n");

    while (angle <= MAX)
    {
        x = (PI / MAX) * angle;
        y = cos(x);
    }
}