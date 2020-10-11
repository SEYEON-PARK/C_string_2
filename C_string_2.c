#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "안녕하세요. ", b[30] = "반갑습니다! ";

	strcat_s(a, sizeof(a), b); // a는 a와 b를 더한 내용과 같다.
	printf("%s\n", a);

	return 0;

}