#include<stdio.h>
int is_within(const char *arrary, char c) {

	for (int i = 0; *(arrary+i)!='\0'; i++)
	{
		if (*(arrary+i)=='c')
		{
			return 1;
		}
	}
	return 0;
}
int main(void) {

}