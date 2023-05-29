
void main()
{
    int condition;
    printf("enter the condition");
    scanf("%d", &condition);

    switch (condition)
    {
    case 1:
    {
        int a, b, c;
        printf("Addtion");
        scanf("%d %d", &a, &b);
        c = sum(a, b);
        printf("addtion is : %d", c);
        break;
    }
    case 2:
    {
        printf("Sub");
        sub();
        break;
    }
    case 3:
    {
        int n, l;
        printf("power");
        scanf("%d %d", &n, &l);
        power(n, l);
        break;
    }
    default:
    {
        printf("default");
    }
    }
}

sum(x, y)
{
    int c;
    c = x + y;
    return (c);
}
sub()
{
    int a, b, c;
    printf("enter the value a and b");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("sub is : %d", c);
}

power(n, l)
{
    int i, c = 1;
    for (i = 1; i <= l; i++)
    {
        c *= n;
    }
    printf("sum is : %d", c);
}