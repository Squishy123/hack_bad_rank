
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char* digit_str[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = a; i <= b; i++) {
        if(i > 0 && i < 10) {
            printf("%s\n", digit_str[i-1]);
        } else if (i > 9 && i % 2 == 0) {
            printf("even\n");
        } else if (i > 9) {
            printf("odd\n");
        }
    }

    return 0;
}


