

// void main()
// {
//     int arr[7] = {1, 4, 6, 3, 5, 2, 5};
//     int min = arr[0];
//     for (int i = 0; i < 7; i++)
//     {
//         if (min > arr[i])
//             min = arr[i];
//     }
//     printf(" min %d", min);
// }

// maximum
// void main()
// {
//     int arr[7] = {1, 4, 6, 3, 5, 2, 5};
//     int min = arr[0];
//     for (int i = 0; i < 7; i++)
//     {
//         if (min < arr[i])
//             min = arr[i];
//     }
//     printf(" min %d", min);
// }

// addition of array

void main()
{
    int arr[7] = {1, 4, 6, 3, 5, 2, 5};
    int min = 0;
    for (int i = 0; i < 7; i++)
    {
        min += arr[i];
    }
    printf(" min %d", min);
}