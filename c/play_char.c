#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	char ch;
	char str[300];
	char sen[300];

	scanf("%c", &ch);
	scanf("%s\n", str);
	scanf("%[^\n]%*c", sen);
	
	printf("%c\n%s\n%s\n",ch,str,sen);
	return 0;
}
