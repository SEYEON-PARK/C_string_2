#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "�ȳ��ϼ���. ", b[30] = "�ݰ����ϴ�! ";

	strcat_s(a, sizeof(a), b); // a�� a�� b�� ���� ����� ����.
	printf("%s\n", a);

	return 0;

}