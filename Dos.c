#include "Dos.h"

/*修改光标位置*/
void SetPosition(int x,int y)
{
    HANDLE winHandle;//句柄
    COORD pos = {x,y};
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(winHandle,pos);
}

/*打印菜单*/
void PrintMenu()
{
    SetPosition(40,1);
    printf("Dos命令清单");
    SetPosition(20,3);
    printf(SEP);
    SetPosition(20,5);
    printf("1、设置自动关机");
    SetPosition(57,5);
    printf("2、取消自动关机");
    SetPosition(20,7);
    printf("3、注销当前用户");
    SetPosition(57,7);
    printf("4、切换到CMD窗口");
    SetPosition(20,9);
    printf("5、查看帮助信息");
    SetPosition(57,9);
    printf("6、待完成");
    SetPosition(20,11);
    printf(SEP);
    SetPosition(25,13);
    printf("以下命令需要输入密码获取管理员权限才能运行");
    SetPosition(20,15);
    printf(SEP);
    SetPosition(20,17);
    printf("7、启动任务管理器");
    SetPosition(57,17);
    printf("8、结束命令控制台");
    SetPosition(20,19);
    printf("9、注册表编辑器");
    SetPosition(57,19);
    printf("0、待完成");
    SetPosition(20,21);
    printf(SEP);
}

/*清空信息*/
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
