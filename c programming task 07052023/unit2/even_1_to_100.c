

void main()
{
    int i = 0;
    printf("even number from 1 to 100 are:\n ");

    for (i = 2; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
}