

void main()
{
    int a, b, c;
    printf("enter the value a and  b");
    scanf("%d %d", &a, &b);
    printf("sum is %d\n", sum(a, b));
    printf("diff is %d\n", diff(a, b));
    printf("mult is %d\n", mult(a, b));
    printf("division is %d\n", division(a, b));
}

sum(a, b)
{
    int c;
    c = a + b;
    return (c);
}
diff(a, b)
{
    int c;
    c = a - b;
    return (c);
}
mult(a, b)
{
    int c;
    c = a * b;
    return (c);
}
division(a, b)
{
    int c;
    c = a / b;
    return (c);
}