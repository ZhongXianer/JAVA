#include <stdio.h>
#include <stdlib.h>
#define N 5//ע��һ��Ҫ�궨��

int main()
{
    //����������������׵�ַ
    //��ά�������⣺1.����n��һά���������
    int i,j;
    double score[5][3] = {     //ǰ�����к�������
        {15, 78, 98},
        {15, 75, 98},
        {15, 78, 97},
        {17, 78, 98},
        {15, 78, 68},    //ע��ÿһ��һά���ݵĴ����ź��涼Ҫ�Ӷ��ţ�������
    };
    //���ѭ������
    for(i = 0; i < 5; i ++)
    {
        //�ڲ�ѭ����ʾ��
        for(j = 0; j < 3; j++)
           // printf("%.2lf\t", score[i][j]);      �����������д
            //����ָ�룺��һά������score[i]  => *( score + i)
           // printf("%.2lf\t", *(score[i] + j));
            //��ָ��д
             printf("%.2lf\t", *(*(score + i) + j))
             //��һ�ֱ�ʾ����;
            printf("\n");
    }

    //������һ�����ݣ���һ�е�����������score[0]
    for(i = 0; i < 3; i ++)
    {
        printf("%.2lf\t",score[0][i]);//ע���������ͺ���������ķ���Ҫ�����
    }
    //�����ڶ��е�����
    printf("\n");
    for(i = 0; i < 3; i ++)
    {
        printf("%.2lf\t", score[1][i]);
    }










    //����������Ѿ����׿�������
    /*int num[] = {[1] = 98, 12, 45, 66};
    int i, temp;
    int * ptr_num_start = num;
    int * ptr_num_end= num + 4;
    //��������
    while(ptr_num_start !=ptr_num_end )
    {
        temp = *ptr_num_start;
        *ptr_num_start =* ptr_num_end;
        *ptr_num_end = temp;
        ptr_num_start++;
        ptr_num_end--;//��������Ӣ���ַ�����Ҫ��

    }
    printf("%d\t", num);*/











/*
    //��������
    int array[N] = {15, 20, 25, 30, 35};
    //ʵ�����������  - ԭ������������λԪ�ؽ��н���
    int temp;//��ʱ����
    int i;
    for(i = 0; i < N / 2; i++ )//ע������ֻ�ܽ���N/2��
    {
        //��i��ֵ�͵�N-i-1��ֵ�ཻ��
        temp = array[i];
        array[i] = array[N - i - 1];
        array[N - i - 1] = temp;
    }
    printf("\n");
    for(i = 0; i < N; i++)
    {
        printf("%d\t", *(array + i) );//�Ҳ��Ǻ�������������
    }
*/

    /*int array[] = {15, 20, 25, 30, 35};
    int i;
    int * ptr_array = array;
    //��ֵ��Ϻ󣬾Ϳ���ʹ��ָ���������Ԫ����
   for(i = 0; i < 5; i++)
   {
      // printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, array[i], &ptr_array[i]);
      //�һ��ǲ����������Ǹ�
     //printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, *(ptr_array + i), ptr_array + 1 );
     printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, * ptr_array++, &ptr_array[i]);
     //ÿ��ѭ�������ƶ�ָ���ָ��Ҫע������

   }
   */
   /* int i;
    double score [] = {98, 87, 65, 43, 76};
    double * ptr_score = score;
    printf("double������ĵ�ַռ%d���ֽ�\n", sizeof(ptr_score));
    for(i = 0; i < 5; i++)
    {
        //printf("%.2lf\n", ptr_score[i] );
        //printf("%.2lf\n", * ptr_score);
        printf("%.2lf\n", * (ptr_score + i ));
    }
    */




    return 0;
}












