void LiB()
{
system("pkg update -y" );
system("pkg upgrade -y");
system("pkg install python -y");
system("pip install you-get");
system("termux-setup-storage");
system("mv * $PREFIX/bin");
printf("\n配置成功!\n");
printf("下次启动请输入get切记切记切记\n");
printf("在软件里输入get就行了\n");
}
void FiLe()
{
system("mv * /sdcard/Download");
printf("\n视频已移动到Download文件");
}
