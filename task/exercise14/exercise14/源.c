#include<stdio.h>
/*
��Ŀ�����9*9�ھ���
����������������п��ǣ���9��9�У�i�����У�j�����С�
*/
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d\t", i, j, (i*j));
		}
		printf("\n");
	}
	return 0;
}