

int main()
{
    char str[] = {"jahajw"};
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not palindorm \n", str);
            return 0;
        }
    }
    printf("%s is  palindorm\n", str);
    return 0;
}