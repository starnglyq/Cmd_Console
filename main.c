#include "Dos.h"

int main()
{
    int choice;
    char time[5];
    char str[20] = "shutdown -s -t ";
    char password[20] = "administrator";
    char input[20];
    SetConsoleTitle("Dos�������̨");//�޸�dos��������
    PrintMenu();//��ӡ�˵�
    do
    {
        Clear(20,22);
        SetPosition(20,22);
        printf("������Ҫִ�е����");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1://�����Զ��ػ�
            SetPosition(20,23);
            printf("�������Զ��ػ�ʱ��:");
            scanf("%s",time);
            system(strcat(str,time));
            SetPosition(20,24);
            printf("�Զ��ػ�������");
            sleep(2);
            break;
        case 2://ȡ���Զ��ػ�
            SetPosition(20,23);
            printf("�Զ��ػ���ȡ��");
            SetPosition(20,23);
            system("shutdown -a");
            sleep(2);
            break;
        case 3://ע����ǰ�û�
            SetPosition(20,23);
            printf("����ע���û�....");
            sleep(2);
            system("shutdown -l");
            break;
        case 4://�л���CMD����
            SetPosition(0,24);
            system("cmd");
            break;
        case 5://�鿴������Ϣ
            SetPosition(20,23);
            printf("���룺administrator");
            sleep(2);
            break;
        case 6://�����
            SetPosition(20,23);
            printf("��ǰ���ܴ����....");
            sleep(2);
            break;
        case 7://�������������
            SetPosition(20,23);
            printf("�����������Ի�ȡ��ù���ԱȨ�ޣ�");
            scanf("%s",input);
            if(strcmp(input,password) == 0)
            {
                SetPosition(20,24);
                printf("������ȷ���ɹ�ȡ�ù���ԱȨ��");
                SetPosition(20,25);
                printf("���ڴ����������");
                SetPosition(20,26);
                printf("���Ժ�....");
                sleep(2);
                system("taskmgr.exe");
            }
            else
            {
                SetPosition(20,24);
                printf("�������ȡ�ù���ԱȨ��ʧ��");
                sleep(2);
            }
            break;
        case 8://�����������̨
            SetPosition(20,23);
            printf("�����������Ի�ȡ��ù���ԱȨ�ޣ�");
            scanf("%s",input);
            if(strcmp(input,password) == 0)
            {
                SetPosition(20,24);
                printf("������ȷ���ɹ�ȡ�ù���ԱȨ��");
                SetPosition(20,25);
                printf("���ڽ����������̨");
                SetPosition(20,26);
                printf("���Ժ�....");
                sleep(2);
                exit(0);
            }
            else
            {
                SetPosition(20,24);
                printf("�������ȡ�ù���ԱȨ��ʧ��");
                sleep(2);
            }
            break;
        case 9://ע���༭��
            SetPosition(20,23);
            printf("�����������Ի�ȡ��ù���ԱȨ�ޣ�");
            scanf("%s",input);
            if(strcmp(input,password) == 0)
            {
                SetPosition(20,24);
                printf("������ȷ���ɹ�ȡ�ù���ԱȨ��");
                SetPosition(20,25);
                printf("���ڴ�ע���༭��");
                SetPosition(20,26);
                printf("���Ժ�....");
                sleep(2);
                system("regedit");
            }
            else
            {
                SetPosition(20,24);
                printf("�������ȡ�ù���ԱȨ��ʧ��");
                sleep(2);
            }
            break;
        case 0://�����
            SetPosition(20,23);
            printf("��ǰ���ܴ����....");
            sleep(2);
            break;
        default:
            SetPosition(20,22);
            printf("����������������룡");
            sleep(2);
            break;
        }
    }while(1);
    system("pause");
    return 0;
}
