
void main()
{
    int i, count = 0;
    for (i = 0; i <= 100; i++)
    {
        if (i % 6 == 0 && i % 4 != 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\ncount of  num: %d", count);
}