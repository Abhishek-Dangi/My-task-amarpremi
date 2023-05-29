#define PI 3.1416

void main()
{
    float area;
    int radius;
    printf("enter the radius of circle");
    scanf("%d", &radius);
    printf("radius of circle is %d \n", radius);

    area = 2 * (PI * radius);
    printf("area of circle is %f", area);
}
