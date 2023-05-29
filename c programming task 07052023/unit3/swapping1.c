

void main()
{
    int x, y, z;
    x = 10;
    y = 20;
    z = 30;

    printf("before swapping\n");
    printf("values of x %d\n", x);
    printf("values of y %d\n", y);
    printf("values of z %d\n", z);

    x = y;
    y = z;
    z = x;
    printf("after swapping\n");

    printf("values of x %d\n", x);
    printf("values of y %d\n", y);
    printf("values of z %d\n", z);
}