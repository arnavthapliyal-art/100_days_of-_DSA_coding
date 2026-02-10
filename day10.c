/* Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards */
#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int start, end, flag = 1;
    printf("Enter a string :\n");
    scanf("%s", s);

    start=0;
    end = strlen(s) - 1;

    while (start < end) {
        if (s[start]!= s[end]) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }
    if (flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}
