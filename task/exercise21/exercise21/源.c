#include<stdio.h>
/*
��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������� ��10�����ʱ��
�����������ף���10�η�����ߣ�
*/
int main()
{
	float height = 100;
	float sum = 100;
	int i;
	for (i = 1; i <= 9; i++)
	{
		height = height / 2;
		sum = sum + 2 * height;
	}
	height = height / 2;
	printf("��%d�η����ĸ߶�Ϊ��%f\n", i, height);
	printf("ʮ�����ʱ�������ܸ߶�Ϊ��%.2f",sum);


	return 0;
}