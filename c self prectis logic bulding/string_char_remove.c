

void main()
{
    char string[15] = {"this is c program"};
    int i, j, v = 0, c = 0;
    int len = strlen(string);
    printf("enter the string\n");
    for (i = 0; i < len; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            v++;
        }
        else
            c++;
    }
    printf("vowle is %d ", v);
    printf("consonet is %d ", c);
}