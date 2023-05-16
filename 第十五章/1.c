//#include<stdio.h>
//int convert(const char* str);
//int main(void) {
//	char* pbin = "01001001";
//	printf("%d", convert(pbin));
//}
//int convert(const char* str) {
//	int i = 0,sum=0,exp=1;
//	while (str[i]!='\0')
//	{
//		i++;
//	}
//	for (i--; i >= 0; i--, exp *= 2)
//	{
//		sum += (str[i]-'0') * exp;
//	}
//	return sum;
//}
#include <stdio.h>
#include <string.h>

int convert(const char* str);

int main(void)
{
    const char* pbin = "01001001";

    printf("binary %s is decimal %d\n", pbin, convert(pbin));
    //书上有误, 01001001对应的不是25而是73

    return 0;
}

int convert(const char* str)
{
    int sum = 0, len = strlen(str);
    for (int i = len - 1, exp = 1; i >= 0; --i, exp *= 2)
    {
        sum += (str[i] - '0') * exp;
    }
    return sum;
}
