#include "Dos.h"

/*�޸Ĺ��λ��*/
void SetPosition(int x,int y)
{
    HANDLE winHandle;//���
    COORD pos = {x,y};
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(winHandle,pos);
}

/*��ӡ�˵�*/
void PrintMenu()
{
    SetPosition(40,1);
    printf("Dos�����嵥");
    SetPosition(20,3);
    printf(SEP);
    SetPosition(20,5);
    printf("1�������Զ��ػ�");
    SetPosition(57,5);
    printf("2��ȡ���Զ��ػ�");
    SetPosition(20,7);
    printf("3��ע����ǰ�û�");
    SetPosition(57,7);
    printf("4���л���CMD����");
    SetPosition(20,9);
    printf("5���鿴������Ϣ");
    SetPosition(57,9);
    printf("6�������");
    SetPosition(20,11);
    printf(SEP);
    SetPosition(25,13);
    printf("����������Ҫ���������ȡ����ԱȨ�޲�������");
    SetPosition(20,15);
    printf(SEP);
    SetPosition(20,17);
    printf("7���������������");
    SetPosition(57,17);
    printf("8�������������̨");
    SetPosition(20,19);
    printf("9��ע���༭��");
    SetPosition(57,19);
    printf("0�������");
    SetPosition(20,21);
    printf(SEP);
}

/*�����Ϣ*/
void Clear(int x,int y)
{
    int i, j;
    SetPosition(x,y);
    for(i = 0;i < 5; i++)
    {
        for(j = 0;j < 60; j++)
        {
             printf(" ");
        }
        SetPosition(x,y + i + 1);
    }
}
