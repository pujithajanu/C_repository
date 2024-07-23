//1.GREATEST OF TWO NUMBERS
#include<stdio.h>
#include<stdlib.h>
int greatest(int a,int b){
int c;
c=abs(a-b);
return (a+b+c)/2;
}

int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("%d",greatest(a,b));
return 0;
}