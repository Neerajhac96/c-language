//Write a program to check whether a give string is palindrome or not.
#include<stdio.h>
#include<string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    int i = 0, j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}