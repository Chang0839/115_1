#include<stdio.h>
int main()
{
    int score;
    int attendence;
    printf("請輸入成績(分)：");
    scanf("%d",&score);
    printf("請輸入出席率(%)：");
    scanf("%d",&attendence);
    if(score>=60)
    {
    if(attendence>=80) 
    {
        printf("課程通過");
    }
    else
    {
    printf("成績不及格");
    }
    }
    else
    {
    printf("成績不及格");
    }
    return 0;
}