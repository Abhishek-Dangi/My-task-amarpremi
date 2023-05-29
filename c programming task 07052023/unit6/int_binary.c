// Step 1 : Remainder when 10 is divided by 2 is zero.Therefore, arr[0] = 0.
//  Step 2 : Divide 10 by 2. New number is 10 / 2 = 5.
//  Step 3 : Remainder when 5 is divided by 2 is 1. Therefore, arr[1] = 1.
//  Step 4 : Divide 5 by 2. New number is 5 / 2 = 2.
//  Step 5 : Remainder when 2 is divided by 2 is zero.Therefore, arr[2] = 0.
//  Step 6 : Divide 2 by 2. New number is 2 / 2 = 1.
//  Step 7 : Remainder when 1 is divided by 2 is 1. Therefore, arr[3] = 1.
//  Step 8 : Divide 1 by 2. New number is 1 / 2 = 0.
//  Step 9 : Since number becomes = 0. Print the array in reverse order.Therefore the equivalent binary number is 1010.

void main()
{
    int i, n = 20, rem, arr[10];

    while (n > 0)
    {
        rem = n % 2;
        if (rem == 0)
        {
            arr[i] = 0;
            // printf("%d", rem);
        }
        if (rem != 0)
        {
            arr[i] = 1;
            // printf("%d ", rem);
        }
        printf("%d ", arr[i]);

        n /= 2;
    }
}