#include <stdio.h>
#include <stdlib.h>
/*
 ��Ŀ����������������m��n���������Լ������С��������
�������������շ������
*/

int main()
{
    int m,n,a,b;
    int temp;
    printf("����������������m��n�����м��ÿո������");
    scanf("%d %d", &m,&n);
    if(m > n)
    {
        a = m;
        b = n;
    }
    else
    {
        a = n;
        b = m;
    }
    do
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    while(temp != 0);

    int num;
    num = m*n/a;
    printf("m��n�����Լ��Ϊ��%d\n", a);
    printf("m��n����С������Ϊ��%d",num);


    return 0;
}
