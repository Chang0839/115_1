#include<stdio.h>
int main()
{
int age;
printf("請輸入年齡:");
scanf("%d",&age);
if(age<=6)
{
    printf("免費\n");
}
else if(age<=12)
{
    printf("兒童票\n");
}
else if(age<=64)
{
    printf("全票\n");
}
else
{
    printf("敬老票\n");
}
return 0;
}