
add(int x, int y);
sub(int x, int y);
mul(int x, int y);

void main()
{
    int a, b, addition, substract, mult;
    printf("enter the value of a and b");
    scanf("%d %d", &a, &b);

    addition = add(a, b);
    substract = sub(a, b);
    mult = mul(a, b);

    printf("%d * %d = %d\n", a, b, mult);
}

add(x, y)
{
    int c;

    c = x + y;
    return (c);
}
sub(x, y)
{
    int c;
    c = x - y;
    return (c);
}

mul(x, y)
{
    int c;
    c = x * y;
    return (c);
}