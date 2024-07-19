#include<stdio.h>
int main(){
int m,n,a,b,i;
printf("enter 2 numbers:");
scanf("%d %d",&m,&n);
if(m<n){
    a=n;
    b=m;
}       
else{
    a=m;b=n;
}
if(a%b==0)
printf("%d is HCF",b);
else{
    for(i=b;i>0;i--){
        if(a%i==0 && b%i==0){
        printf("%d is HCF",i);
        break;
    }
}}
return 0;
}
