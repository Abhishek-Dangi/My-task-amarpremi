
int sqr(int num);

void main()
{
    int x1, y1, x2, y2, d;
    int temp1, temp2;
    printf("enter the point x1 and y1");
    scanf("%d %d", &x1, &y1);
    printf("enter the point x2 and y2");
    scanf("%d %d", &x2, &y2);

    printf("point x1 =%d y1=%d\n", x1, y1);
    printf("point x2 =%d y2=%d\n", x2, y2);

    temp1 = sqr(x2 - x1);
    temp2 = sqr(y2 - y1);
    d = temp1 + temp2;
    // printf("point t1 =%d t2=%d\n", temp1, temp2);
    printf("distance =%d \n", d);
}

int sqr(int num)
{
    int c;
    c = num * num;
    return (c);
}
// page number 22
// question num 1.11
// completed