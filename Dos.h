#ifndef DOS_H_INCLUDED
#define DOS_H_INCLUDED
#define SEP "****************************************************"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/*修改光标位置*/
void SetPosition(int,int );

/*打印菜单*/
void PrintMenu();

/*清空信息*/
void Clear(int,int);

#endif // DOS_H_INCLUDED
