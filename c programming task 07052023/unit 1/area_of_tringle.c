void main()
{

    int s, a, b, c, area, temp, test;

    printf("enter the co-ordinate a b and c");

    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2;
    temp = s * (s - a) * (s - b) * (s - c);
    area = sqrt(temp);
    // test = sqrt(16);
    printf("Area of tringle %d", temp);
    // printf("Area of tringle %d", test);
}