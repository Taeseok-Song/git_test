#include<stdio.h>
int sigma(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += 1;
	}
	return sum;
}
int main(void)
{
	int n, result;
	
	printf("1�̻� 100������ ���� 1���� �Է��ϼ���!\n");
	scanf_s("%d", &n);

	result = sigma(n);
	printf("1���� %d ������ ���� %d�̴�\n.", n, result);
	
	return 0;
}