#include "Dos.h"

int main()
{
    int choice;
    char time[5];
    char str[20] = "shutdown -s -t ";
    char password[20] = "administrator";
    char input[20];
    SetConsoleTitle("Dos命令控制台");//修改dos窗口名称
    PrintMenu();//打印菜单
    do
    {
        Clear(20,22);
        SetPosition(20,22);
        printf("请输入要执行的命令：");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1://设置自动关机
            SetPosition(20,23);
            printf("请输入自动关机时间:");
            scanf("%s",time);
            system(strcat(str,time));
            SetPosition(20,24);
            printf("自动关机已启动");
            sleep(2);
            break;
        case 2://取消自动关机
            SetPosition(20,23);
            printf("自动关机已取消");
            SetPosition(20,23);
            system("shutdown -a");
            sleep(2);
            break;
        case 3://注销当前用户
            SetPosition(20,23);
            printf("正在注销用户....");
            sleep(2);
            system("shutdown -l");
            break;
        case 4://切换到CMD窗口
            SetPosition(0,24);
            system("cmd");
            break;
        case 5://查看帮助信息
            SetPosition(20,23);
            printf("密码：administrator");
            sleep(2);
            break;
        case 6://待完成
            SetPosition(20,23);
            printf("当前功能待完成....");
            sleep(2);
            break;
        case 7://启动任务管理器
            SetPosition(20,23);
            printf("请输入密码以获取获得管理员权限：");
            scanf("%s",input);
            if(strcmp(input,password) == 0)
            {
                SetPosition(20,24);
                printf("密码正确，成功取得管理员权限");
                SetPosition(20,25);
                printf("正在打开任务管理器");
                SetPosition(20,26);
                printf("请稍后....");
                sleep(2);
                system("taskmgr.exe");
            }
            else
            {
                SetPosition(20,24);
                printf("密码错误，取得管理员权限失败");
                sleep(2);
            }
            break;
        case 8://结束命令控制台
            SetPosition(20,23);
            printf("请输入密码以获取获得管理员权限：");
            scanf("%s",input);
            if(strcmp(input,password) == 0)
            {
                SetPosition(20,24);
                printf("密码正确，成功取得管理员权限");
                SetPosition(20,25);
                printf("正在结束命令控制台");
                SetPosition(20,26);
                printf("请稍后....");
                sleep(2);
                exit(0);
            }
            else
            {
                SetPosition(20,24);
                printf("密码错误，取得管理员权限失败");
                sleep(2);
            }
            break;
        case 9://注册表编辑器
            SetPosition(20,23);
            printf("请输入密码以获取获得管理员权限：");
            scanf("%s",input);
            if(strcmp(input,password) == 0)
            {
                SetPosition(20,24);
                printf("密码正确，成功取得管理员权限");
                SetPosition(20,25);
                printf("正在打开注册表编辑器");
                SetPosition(20,26);
                printf("请稍后....");
                sleep(2);
                system("regedit");
            }
            else
            {
                SetPosition(20,24);
                printf("密码错误，取得管理员权限失败");
                sleep(2);
            }
            break;
        case 0://待完成
            SetPosition(20,23);
            printf("当前功能待完成....");
            sleep(2);
            break;
        default:
            SetPosition(20,22);
            printf("输入错误，请重新输入！");
            sleep(2);
            break;
        }
    }while(1);
    system("pause");
    return 0;
}
