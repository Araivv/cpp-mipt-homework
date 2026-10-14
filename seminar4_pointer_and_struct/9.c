#include <stdio.h>
#include <string.h>

void used_chars(const char* str, char* used)
{
    int seen[26] = {0};
    for (const char* p = str; *p != '\0'; ++p)
    {
        if (*p >= 'a' && *p <= 'z')
            seen[*p - 'a'] = 1;
        else if (*p >= 'A' && *p <= 'Z')
            seen[*p - 'A'] = 1;
    }

    int k = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (seen[i])
        {
            used[k] = 'a' + i;
            k++;
        }
    }
    used[k] = '\0';
}

int main()
{
    char s[50] = "Sapere Aude";
    char u[30];
    used_chars(s, u);
    printf("%s\n", u); 
    strcpy(s, "123!$@");
    used_chars(s, u);
    printf("%s\n", u); 
    strcpy(s, "The Quick Brown Fox Jumps Over The Lazy Dog!");
    used_chars(s, u);
    printf("%s\n", u); 
}