

void main()
{
    int arr[] = {80,
                 90,
                 70,
                 89,
                 80,
                 70,
                 45,
                 23,
                 12,
                 43,
                 23};
    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] == 80)
        {
            printf("students are obtain =%d \n", arr[i]);
        }
        if (arr[i] == 60)
        {
            printf("students are obtain =%d \n", arr[i]);
        }
        if (arr[i] == 40)
        {
            printf("students are obtain =%d \n", arr[i]);
        }
        if (arr[i] <= 40)
        {
            printf("students are obtain less than 40 =%d \n", arr[i]);
        }
        if (arr[i] <= 81 && arr[i] <= 100)
        {
            printf("range btw 81 to 100 =%d \n", arr[i]);
        }
        if (arr[i] <= 61 && arr[i] <= 80)
        {
            printf("range btw 61 to 80 =%d \n", arr[i]);
        }
        if (arr[i] <= 41 && arr[i] <= 60)
        {
            printf("range btw 41 to 60 =%d \n", arr[i]);
        }
        if (arr[i] <= 0 && arr[i] <= 40)
        {
            printf("range btw 0 to 40 =%d \n", arr[i]);
        }
    }
}