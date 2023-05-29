

void main()
{
    int n = 10;
    int arr[n];
    int i, j, e = 0, o = 0;

    printf("enter the elemenet\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("even numbers \n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
            e++;
        }
    }
    printf("\nOdd series\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
            o++;
        }
    }
    printf("\neven %d", e);
    printf("\nodd %d", o);
}