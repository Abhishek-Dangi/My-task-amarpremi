

void main()
{
    int arr1[5], arr2[5], sum[5];
    int i, total = 0;

    printf("enter the first arry\n");
    for (i = 1; i < 5; i++)
    {
        scanf("%d ", &arr1[i]);
    }
    printf("enter the second arry\n");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d ", &arr2[i]);
    }
    for (i = 1; i <= 5; i++)
    {
        sum[i] = arr1[i] + arr2[i];
        printf("%d is %d\n", i, sum[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        total = total + sum[i];
    }
    printf("%d ", total);
}