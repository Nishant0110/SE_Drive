#include<stdio.h>
main()
{
    int ans;
    int num,num1;
    printf("Enter Your Values Here:");
    scanf("%d%d",&num,&num);
    ans=sum(num,num1);
    printf("This is Your sum of two values:%d",ans);
}
int sum(int a,int b)
{
    return a+b;
}