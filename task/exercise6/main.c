#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
��Ŀ���󷽳�ax2+bx+c=0�ĸ���Ҫ������ϵ��a��b��c��������̵ĸ���
�������������ϵ����ͬ�������
*/

int main()
{
    int a,b,c;
    float p,q;
    int judge;
    printf("������һ������Ϊax^2+bx+c=0\n");
    printf("������a,b,c�������м��ÿո������");
    scanf("%d %d %d",&a,&b,&c);
    judge = pow(b,2) - 4*a*c;
    p = (-b)/(2*a);
    q = sqrt(judge)/(2*a);
    if(judge < 0)
        printf("�˷���û��ʵ����\n");
    else if(judge ==
             0)
        printf("�˷�����һ��ʵ��Ϊ��\nx = %.2f",p);
    else
    {
        printf("�˷������������ֱ�Ϊ��\n");
        printf("x1 = %.2f,x2= %.2f",(p+q),(p-q));
    }


    return 0;
}
