

void main()
{
    int a = 10, b = 20, c;
    printf("berfore: a=%d  b=%d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("swapping: a=%d  b=%d", a, b);
}