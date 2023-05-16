#include<stdio.h>
#define LEN 12
struct messages
{
	char ins_num[LEN];
	struct names name;

};
struct names {
	char firstname[LEN];
	char middlename[LEN];
	char lastname[LEN];
};
int main(void) {
	struct messages m[5];

}