

void main()
{

    char str[100] = {"this is vowel and consonent"};
    int i, v = 0, c = 0, len;
    len = strlen(str);
    for (i = 0; i <= len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v++;
        }
        else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            c++;
        }
    }
    printf("vowel : %d and consonet: %d", v, c);
}