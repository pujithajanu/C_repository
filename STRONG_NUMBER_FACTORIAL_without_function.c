#include <stdio.h>
int main() {
 int n,n1,i,p,fac,sum=0;
 printf("enter n:");
 scanf("%d",&n);
 n1=n;
 while(n!=0){
     p=n%10;fac=1;
     for(i=1;i<=p;i++){
         fac *=i;
     }
     sum+=fac;
     n=n/10;
 }
 if(n1==sum)
 printf("yes strong number");
 else
 printf("no,not a strong number");

    return 0;
}
