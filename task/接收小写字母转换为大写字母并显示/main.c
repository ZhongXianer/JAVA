#include <stdio.h>
#include <stdlib.h>

int main()
{
    double factshanghai;
    int strength;
    double maxshanghai = 256;
    printf("��������ҵ�������");
    scanf("%d", &strength);
    factshanghai = maxshanghai * (strength + 100) / 100;
    printf("������ʵ������˺�Ϊ��%.2lf", factshanghai);

    return 0
}
