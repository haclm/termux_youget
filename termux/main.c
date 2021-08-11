#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lib.c"
void Downloads();
int main()
{
int Choose;
printf("欢迎来到此程序，本程序由极客jobs免费提供给您。第一次进来先安装配置选2。感谢您的使用！\n");
while(1)
{
printf("0.退出程序\n1.下载视频\n2.安装配置\n");
printf("输入您的选项：");
scanf("%d",&Choose);
switch(Choose){
	case 0:
	return 0;
	break ;
	case 1:
        Downloads();
	break;
	case 2:
        LiB();
}
}
}
void Downloads() {
	char Url[100],Code[110];
	printf("请输入网址:");
scanf("%s",Url);
printf("%s\n",Url);
strcpy(Code,"you-get ");
strcat(Code,Url);
system(Code);
printf("\n下载成功");
FiLe();
printf("视频已经移动到Download");
exit(0);
}
