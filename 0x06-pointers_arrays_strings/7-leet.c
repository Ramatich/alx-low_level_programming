char *leet(char *str)
{
    char *leet_dict = "aAeEoOtTlL";
    char *leet_replace = "4433007711";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; leet_dict[j] != '\0'; j++)
        {
            if (str[i] == leet_dict[j])
            {
                str[i] = leet_replace[j];
                break;
            }
        }
    }

    return str;
}

