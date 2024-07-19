#include<stdio.h>
int main(){
int m,n,a,b,p,i=2;
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
printf("%d is LCM",a);
else{
    while(1){
        p=i*b;
        if(p%a==0 && p%b==0){
        printf("%d is LCM",p);
        break;
    }
    i++;
}}
return 0;
}
