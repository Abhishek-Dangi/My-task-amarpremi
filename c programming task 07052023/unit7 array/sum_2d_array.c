
void main()
{
    int arr[2][3];
    int i, j, sum = 0;

    for (i = 0; i < 2; i++)
    {
        printf("enter the row %d\n", i);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        // printf("enter the row %d\n", i);
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("%d ", sum);
}