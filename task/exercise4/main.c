#include <stdio.h>
#include <stdlib.h>
/*
��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.
            ��� �ҳ�1000���ڵ�����������
*/
void main()
{
    int i , j;
    int temp;
    int sum = 1;
    for(i = 1; i <= 1000; i ++)
    {

        for( j = 2; j <= i; j ++)
        {
            temp = i % j;
            if(temp == 0 && i / j != 1)
            sum = sum + j;
        }
         printf("%d\t",sum);
    }


}
