#define PI 3.14
int sqr(int x);

int void main()
{
    int x1, area, y1, x2, y2, temp1, temp2, d;

    printf("enter the point x1 and y1");
    scanf("%d %d", &x1, &y1);
    printf("enter the point x2 and y2");
    scanf("%d %d", &x2, &y2);

    // printf("point x1 =%d y1=%d\n", x1, y1);
    // printf("point x2 =%d y2=%d\n", x2, y2);
    // temp1 = sqr(x2 - x1);
    temp1 = sqr(x2 - x1);
    temp2 = sqr(y2 - y1);
    d = temp1 + temp2;
    printf("area of circle %d", temp1);
}
int sqr(num)
{
    int c;
    c = num * num;
    return (c);
}
// C = 2πr;
// A = πr2;

// not working