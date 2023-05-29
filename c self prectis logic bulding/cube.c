

void main()
{
    int n = 4, p;
    p = cube(n);
    printf("power of %d is %d ", n, p);
}

int cube(n)
{
    int sum = 0;
    sum = n * n * n;
    return (sum);
}