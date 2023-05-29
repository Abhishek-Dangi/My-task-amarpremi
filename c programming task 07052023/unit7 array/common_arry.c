

void main()
{
    int n = 10;
    int arr[n];
    int i, j;
    float avg;

    printf("enter the elemenet\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        avg += arr[i];
        // printf("%d", arr[i]);
    }
    printf("average : %1.2f", (avg / 10));
}