

void main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            // i == 1 || j == 1 || i == 2 || j == 2 || i == 4|| i == 5 || j == 4 || j == 5
            if (i != 3 || j != 3)
                printf("S ");
            else
                printf("O ");
        }
        printf("\n");
    }
}