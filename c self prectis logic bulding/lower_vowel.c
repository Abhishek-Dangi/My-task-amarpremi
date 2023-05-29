

void main()
{
    char str[100] = {"abcei"};
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("upper case vowel %s", str);
}