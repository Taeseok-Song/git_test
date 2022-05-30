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
	
	printf("1이상 100이하의 정수 1개를 입력하세요!\n");
	scanf_s("%d", &n);

	result = sigma(n);
	printf("1부터 %d 까지의 합은 %d이다\n.", n, result);
	
	return 0;
}