#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*
��Ŀ���ж�101-200֮���ж��ٸ����������������������
����������ж������ķ�������һ�����ֱ�ȥ��2��sqrt(�����)������ܱ������� ���������������������֮�������� ������������
*/

int main()
{
    int sum = 0;
    int num,i,dem;
    for(num = 101;num <= 200;num++)
    {
       for(i = 1;i < sqrt(num);i++)
       {
           dem = num % i;
        }
       if(dem==0) break;
       sum++;
       printf("%d\t",num);
    }
    printf("\n101-200֮����%d������",sum);

    return 0;
}
