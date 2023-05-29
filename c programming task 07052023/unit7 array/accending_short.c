

void main()
{
    int n = 10;
    int arr[n];
    int i, j, a;

    printf("enter the ele\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("before shorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    printf("\nafter shorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}