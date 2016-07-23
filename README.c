#include<stdio.h>
int main(){
    int num=0,r,i,sum=0,d=0,temp;
    printf("hello");
    scanf("%d",&d);
    while(d){
         r=d%10;
         d=d/10;
         sum=sum+r;
    }
    printf("%d",sum);
    temp=sum;
    while(temp){
         r=temp%10;
         num=temp/10;
         num=num*10+r;
    }
    if(num==sum)
         printf("%d is a palindrome",temp);
    else
         printf("%d is not a palindrome",temp);

    return 0;
}
