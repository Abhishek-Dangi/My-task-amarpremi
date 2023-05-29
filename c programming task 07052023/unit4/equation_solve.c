

void main()
{
    int x, y;
    printf("enter the value of a and b");
    scanf("%d %d", &x, &y);
    equation(x, y);
    equation1(x, y);
    equation2(x, y);
}

int equation(int x, int y)
{
    int a, b, c;
    a = x + y;
    b = x - y;
    c = a / b;
    printf("solution is %d \n", c);
    // printf("solution is %d \n", a);
    // printf("solution is %d \n", b);
}

int equation1(int x, int y)
{
    int a, c;
    a = x + y;
    c = a / 2;
    printf("solution is %d \n", c);
}
int equation2(int x, int y)
{
    int a, b, c;
    a = x + y;
    b = x - y;
    c = a * b;
    printf("solution is %d \n", c);
}