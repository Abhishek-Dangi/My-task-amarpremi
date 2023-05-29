

void main()
{
    int n1 = 23, n2 = 45, mid, flag = 1;

    mid = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if (mid % n1 == 0 && mid % n2 == 0)
        {
            printf("LCM of %d %d is %d", n1, n2, mid);
            break;
        }
        ++mid;
    }
}