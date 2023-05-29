

void main()
{
    int a = 10, b = 20;
    printf("berfore: a=%d  b=%d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("swapping: a=%d  b=%d", a, b);
}