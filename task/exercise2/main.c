#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*
��Ŀ����ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ��� �������磺153��һ����ˮ�ɻ�������
��Ϊ153=1�����η���5�����η���3�����η���
�������������forѭ������100-999������ÿ�����ֽ����λ��ʮλ����λ��
*/
int main()
{
    int num;
    for(num = 100; num <=999;num++)
    {
        int temp,sum;
        int unit,dec,hun;
        unit = num % 10;
        temp = num/10;
        dec = temp % 10;
        temp = temp/10;
        hun = temp % 10;
        sum =pow(unit,3) + pow(dec,3) + pow(hun,3) ;
        if(sum == num)
            printf("%d\t",num);



    }
    return 0;
}
