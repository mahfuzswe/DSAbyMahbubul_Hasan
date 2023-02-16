#include <stdio.h>

int main()
{
    int num, Cnum, rev, reminder;
    printf("Enter number: ");
    scanf("%d", &num);

    Cnum = num;
    rev = 0;

    while (Cnum != 0)
    {
        reminder = Cnum % 10;
        rev = rev * 10 + reminder;
        Cnum = Cnum / 10;
    }
    if (rev == num)
    {
        printf("%d is a palindrome number\n", num);
    }
    else
        printf("%d is not a palindrome number\n", num);

    return 0;
}