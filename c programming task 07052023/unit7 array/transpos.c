

void main()
{
    int arr[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        printf("enter the row");
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("BEFORE transfor\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    printf("transpos of this martix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}