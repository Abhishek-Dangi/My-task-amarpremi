

void main()
{
    int arr[10] = {3, 5, 7, 12, 18, 16, 9, 12, 9, 10};
    int i, j, a, count = 0;

    for (i = 0; i < 10; i++)
    {
        if (arr[i] >= 5 && arr[i] < 15)
            count++;
    }
    printf("%d", count);
}