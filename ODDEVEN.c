//3.ODD EVEN
#include<stdio.h>
int oddeven(int n){
if(n&1==0)
return 0;
else
return 1;
}

int main(){
int a,n;
scanf("%d",&n);
a=oddeven(n);
if(a==1)
printf("odd");
else
printf("even");
return 0;
}
