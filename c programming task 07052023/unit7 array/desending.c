void main()
{

    int arr[10] = {1, 4, 3, 6, 7, 5, 8, 34, 7, 6};
    int i, j, a;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {

        printf("%d ", arr[i]);
    }
}