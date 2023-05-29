

void main()
{
    int i, count = 0;

    for (i = 0; i < 300; i++)
    {
        if (i > 100 && i < 200)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
            count++;
        }
    }
    printf("\ncount of prime num:%d", count);
}