#include <stdio.h>
#include <string.h>

int main()
{
    char ch[50];
    int count = 0, i = 0, digit = 0, spaces = 0, cons = 0, vowel = 0;

    printf("ENter a string: ");
    fgets(ch, sizeof(ch), stdin);
    while (ch[i] != '\0')
    {
        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            count++;
            if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
            {
                vowel++;
            }
            else
            {
                cons++;
            }
        }
        else if (ch[i] >= '0' && ch[i] <= '9')
        {
            digit++;
        }
        else if (ch[i] == ' ')
        {
            spaces++;
        }
        i++;
    }
    printf("\nNumber of alphabets: %d", count);
    printf("\nNumber of digits: %d", digit);
    printf("\nNumber of spaces: %d", spaces);
    printf("\nNumber of vowels: %d", vowel);
    printf("\nNumber of consonants: %d", cons);
    printf("\nNumber of character: %d", i);

    return 0;
}
