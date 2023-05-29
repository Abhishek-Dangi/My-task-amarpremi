

void main()
{
    int arr[3][5];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("enter the row %d\n", i);
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        // printf("enter the row %d\n", i);
        for (j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}