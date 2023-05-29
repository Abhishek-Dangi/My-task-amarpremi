

void main()
{
    int i, j;
    for (i = 1; i <= 20; i++)
    {
        for (j = 1; j <= 16; j++)
        {
            if (i == 1 || j == 2 || j == 1 || j == 15 || j == 16)
            {
                printf("* ");
            }
            if (i == 2 || i == 19)
            {
                printf("- ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

// worng logic