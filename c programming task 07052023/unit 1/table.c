#define num 5;

void main()
{
    int i, n;
    n = num;

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}