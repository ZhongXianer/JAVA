#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flowerprice;
   printf("��һ���ºڷ�ߵ�ҹ��\n");
   printf("С�к����Լ����㻨Ǯ��СŮ������һ��õ�廨\n");
   printf("Ȼ��СŮ�����ʵ�������������Ǯ����\n");
   printf("С�к��ش����");
   scanf("%d", &flowerprice);
   if(flowerprice > 999)
   {
       printf("�ۣ����ǽ��ɣ�\n");
   }
   else if(flowerprice >= 99 && flowerprice <= 999)
   {
       printf("�����ǿ���Լ�ᰡ��\n");
   }
   else if(flowerprice >= 9 && flowerprice < 99)
   {
       printf("�������˽�һ�¡�\n");
   }
   else
   {
       printf("�ޣ�\n");
   }

    return 0;
}
