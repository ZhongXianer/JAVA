#include <stdio.h>
#include <stdlib.h>
/*
��Ŀ����������ж��Ƿ�Ϊ���ꡣ
*/
int main()
{
    while(1)
    {
        int year;
        printf("������һ����ݣ��һ�ظ�����һ���Ƿ������꣺");
        scanf("%d", &year);
        if(year % 4 != 0)
            printf("\n��һ�겻�����꣡\n");
        else
        {
            if(year % 100 == 0 && year % 400 != 0)
            printf("\n��һ�겻�����꣡\n");
            else

            printf("\n��һ�������꣡\n");
        }
    }
    return 0;
}
