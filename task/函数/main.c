#include <stdio.h>
#include <stdlib.h>


#define N 5
//¼�룬��������ɼ�
//����������
void input(double[]);
void sort(double[]);
void show(double[]);

int main()
{
    double scores[N];
    input(scores);
    show(scores);
    return 0;
}
void input(double scores[])
{
    int i;
    for(i = 0; i < N; i ++)
    {
        printf("������ѧ���ĵ�%d�ųɼ�Ϊ��", i + 1);
        scanf("%lf", &scores[i]);
    }
}
void show(double scores[])
{
    int i;
    printf("******************************************************\n");
    printf("����\t��ѧ\tӢ��\t����\t��ѧ\n");
    //��ӡҲ��Ҫһ��forѭ��
    for(i = 0; i < N;i ++)
    {
     printf("%.2lf\t", scores[i]);
    }

    printf("\n******************************************************\n");
}
//����ԭ�ͣ�����һ���ֺţ�
/*void calcCircle(); //����Բ�ε����
void calcRectangle(); //������ε����
void calcSun();

/*
        ����Բ�����������ʵ�֣�

void calcCircle()
{
    double radius, s; //�뾶�����
    printf("������Բ�İ뾶��");
    scanf("%lf", &radius);  //�����ռλ��������%.2lf
    s = 3.14 * radius * radius;//һ��Ҫ����ͷ�ļ� <math.h>
    printf("�뾶Ϊ%.2lf��Բ�����Ϊ��%.2lf\n", radius, s);
}

void calcRectangle()
{
    //Ϊ��רҵһ���㻹�Ƕ���width��height

    double a, b, s;
    printf("��������εĳ�:");
    scanf("%lf", &a);
    printf("��������εĿ�");
    scanf("%lf", &b);
    s = a * b;
    printf("��Ϊ%.2lf��Ϊ%.2lf�ľ��ε����Ϊ��%.2lf\n",a, b, s);

}
int calcSum()
{
    //1-100֮���ż����
    int sum = 0;
    int i = 1;  //����ѭ������
    for(i = 1; i <= 100; i++)  //������i++����Ͳ���Ҫi++
    {
        if(i % 2 == 0)
        {
            sum += i;

        }

    }
    return sum;
}*/
 /* //  calcCircle();
    //calcRectangle();
    //��������з���ֵ������ʱ���ǵ�ʹ�ö�Ӧ���͵ı��������գ�
    int sum = calcSum();
    printf("1-100֮���ż����Ϊ��%d", sum);
     //���ü���Բ����ĺ���
    //�Զ��庯��
    //��д�����Ĳ��裺��ɺ�����Ҫ��
    //��������Ҫһ��ʼ��ȥ����������ĳ������

    //��Ҫ����ֵ��
    //��������ʲô��
    //��Ҫ���������������
    */
        /*
    //��ʾ��̬�ֲ��ڴ�
    int * nums;
    nums = (int *)malloc(sizeof(int) * 5);//Ϊǰ���ָ�붯̬�ֲ���5�����͵Ŀռ�
    nums = (int *)malloc(20);  //Ϊǰ���ָ�붯̬�ķֲ���20���ֽڵĿռ�
    //�ȼ��� int nums[5]
    //Ϊָ�붯̬����ռ��Ժ�ָ��ͱ��������
    free("nums");  //�ͷŶ�̬������ڴ�
    nums = NULL;   //���õı��ϰ��

    printf("��������ͨ���֣��ǳ���ͨ��\n");
    system("pause");
    printf("��������ͨ���֣��ǳ���ͨ��\n");
    system("cls");  //���� - �������򵥵Ķ���Ч��
    system("shutdown /r /t 180");     //180����Զ��ػ�
    system("shutdowm /a");   //ȡ���Զ��ػ�

    //����������÷�
    //1.����������� - һ���ʱ�����ã� ��Ϊʱ��ÿʱÿ�̶��ǲ�ͬ��
    srand(time(NULL));                            //srand(1234);
    //2.ȡ�����
    int num = rand();
    printf("%d\n", num);

    exit(0);//0-�����˳�Ӧ�ó���  ��0 - �������˳�

*/

    //ceil - �컨��    floor - �ذ�
    //ceil ��һ��     floor ȥβ��
    //����Ǹ��������෴
/*    printf("%.2lf\n", ceil(-98.1));
    printf("%.2f\n",floor(-98.9));
*/

    //�������ú���;
    //int ch;
    //printf("%d\n", isupper('A'));  //�ж��Ƿ�Ϊ��д�����ú���
    //printf("%d\n", islower('A')); //�ж��Ƿ�ΪСд
   /* printf("�����������Сд��ĸ��");
    scanf("%c", &ch);
    printf("��Ӧ�Ĵ�д��ĸΪ��%c", toupper(ch)); //��ɶ�Ӧ�Ĵ�д��ĸ*/
    //�������������ֱ�ʾ����ASCII��  ���Ҫ������Ӧ�üӵ�����
   // printf("50��Ӧ���ַ��ǣ�%c\n", 50);
   /* int i;
    //��ӡ���е�ASCII���Ӧ���ַ�
    for(i = 0; i < 127; i++)
    {
        printf("%c\t", i);
    }*/
