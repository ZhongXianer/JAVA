#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define H 30
#define L 60
//�������ֱ���
char Map[H][L];
int score;
int  key;  //��������
int  sum = 1, over = 0;  //�ߵĳ���, ��Ϸ����(�ԳԻ���ǽ)
int  dx[4] = {0, 0, -1, 1};  //���ҡ��ϡ��µķ���
int  dy[4] = {-1, 1, 0, 0};
//�����
struct Snake //�ߵ�ÿ���ڵ����������
{
    int x, y; //���λ��
    int now;  //���浱ǰ�ڵ�ķ���0�� 1�� 2�� 3Ϊ��������
}
Snake[H*L];
const char Shead = '@';  //��ͷ
const char Sbody = '*'; //������
const char Sfood = '#'; //��ʳ��
const char Snode = ' ';  //' '�ڵ�ͼ�ϱ�ʾΪ��

//��������
void Menu();
void Initial();
void Create_Food();
void Button();
void Move();
void Check_Border();
void Check_Head(int x, int y);
void Show();


int main()
{
    Menu();
    system("pause");
    system("cls");
    Initial();
    Show();

    return 0;
}
void Menu()
{
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&& ��ӭ��������̰���ߣ�&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
    printf("&&& ������Ϸ����ͨ�����������������ߵ��ƶ�, #Ϊ�ߵ�ʳ��, ����ײǽŶ! &&&");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}
void Initial()
{
    int i, j;
    int hx, hy;
    memset(Map, '.', sizeof(Map));  //��ʼ����ͼȫ��Ϊ��' '
    system("cls");
    srand(time(0));   //�������
    hx = rand()%H;    //������ͷ
    hy = rand()%L;
    Map[hx][hy] = Shead;
    Snake[0].x = hx;  Snake[0].y = hy;
    Snake[0].now = -1;
    Create_Food();   //�������ʳ��
   for(i = 0; i < H; i++)   //��ͼ��ʾ
 {
  for(j = 0; j < L; j++)
   printf("%c", Map[i][j]);
  printf("\n");
 }


     getch();   //�Ƚ���һ������,ʹ�߿�ʼ���÷�����
     Button();  //ȡ������,���жϷ���
}
void Show()
{
    int  i, j;
    while(1)
    {
        _sleep(500); //�ӳٰ���(1000Ϊ1s),��ÿ����ˢ��һ�ε�ͼ
        Button();   //���жϰ������ƶ�
        Move();
        if(over)
        {
            system("cls");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&& ��ѽ��ײǽ��,С�˼�! ^*^&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
            printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&& ��ȥ��ǽ�������� &&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            getchar();
            break;
        }
        system("cls");   //��յ�ͼ����ʾˢ�ºõĵ�ͼ
       for(i = 0; i < H; i++)
  {
   for(j = 0; j < L; j++)
    printf("%c", Map[i][j]);
   printf("\n");
  }

    }
}
void Create_Food()
{
    int fx, fy;
    while(1)
    {
        fx = rand()%H;
        fy = rand()%L;
        if(Map[fx][fy] == '.')   //ʳ�ﲻ�ܳ������ߵ�λ��
        {
            Map[fx][fy] == Sfood;
            break;
        }

    }
}
void Button()  //ȡ������, ���жϷ���
{
    if(kbhit != 0)   //����Ƿ��м�������,�����򷵻ط���ֵ,��û���򷵻�0
    {
        while(kbhit != 0)   //���ܴ��ڶ������,Ҫȫ��ȡ��,�����һ��Ϊ��
            key = getch();   //�������ӿ���̨��ȡ�������浽key��
        switch(key)
        {   //��
            case 75: Snake[0].now = 0;
            break;
            //��
            case 77: Snake[0].now = 1;
            break;
            //��
            case 72: Snake[0].now = 2;
            break;
            //��
            case 80: Snake[0].now = 3;
            break;
        }
    }
}
void Move()   //�ߵ��ƶ�
{
    int i, x, y;
    int t = sum; //������ǰ�ߵĳ���
    //��¼��ǰ��ͷ��λ��,������Ϊ��,��ͷ���ƶ�
    x = Snake[0].x;
    y = Snake[0].y ;
    Map[x][y] = '.';
    Snake[0].x = Snake[0].x + dx[Snake[0].now];
    Snake[0].y = Snake[0].y + dy[Snake[0].now];
    Check_Border();  //�����ͷ�Ƿ�Խ��
    Check_Head(x,y);   //��ͷ�ƶ����λ�����,����Ϊ:��ͷ�Ŀ�ʼλ��
    if(sum == t)
        for(i = 1; i < sum; i ++)
    {
        if(i == 1)  //β�ڵ�����Ϊ�����ƶ�
        Map[ Snake[i].x ][ Snake[i].y ] = '.';
        if(i == sum -1)  //��ͷ��������ڵ�, ���⴦��
        {
            Snake[i].x = x;
            Snake[i].y = y;
            Snake[i].now = Snake[0].now;
        }
        else  //���������ߵ�ǰһ�������λ��
        {
           Snake[i].x = Snake[i + 1].x;
           Snake[i].y = Snake[i + 1].y;
           Snake[i].now = Snake[i + 1].now;
        }

    Map[Snake[i].x][Snake[i].y] = '*';  //�ƶ���Ҫ��'*'Ϊ����
    }
}
void Check_Border()
{
     if(Snake[0].x < 0 || Snake[0].x > H
 || Snake[0].y < 0 || Snake[0].y >= L)
     over = 1;
}
void Check_Head(int x, int y)
{
    if(Map[Snake[0].x][Snake[0].y] == '.')  //Ϊ��
        Map[Snake[0].x][Snake[0].y] = '@';
    else if(Map[Snake[0].x][Snake[0].y] == '#')  //Ϊʳ��
    {
        Map[Snake[0].x][Snake[0].y] = '@';
        Snake[sum].x = x;
        Snake[sum].y = y;
        Snake[sum].now =Snake[0].now;
        Map[Snake[sum].x][Snake[sum].y] = '*';
        sum++;
        Create_Food();  //�����ٲ���һ��ʳ��
    }
    else
        over = 1;
}






