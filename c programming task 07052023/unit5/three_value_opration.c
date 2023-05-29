
void main()
{
    int a, b, c, avg, largest;
    printf("enter value a, b,c");
    scanf("%d %d %d", &a, &b, &c);

    printf("sum is : %d", sum(a, b, c));
    avg = sum / 3;
    printf("avg= %d", avg);

    largest = larg(a, b, c);
}

sum(int a, int b, int c)
{
    int s;
    s = a + b + c;
    return (s);
}

larg(int a, int b, int c)
{
    if (a < b)
    {
        if (b < c)
        {
            printf("c is large");
        }
        printf("b is larg");
    }
    else
    {
        printf("a is large");
    }
    return 0;
}