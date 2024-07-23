//5.NO OF PRIME NUMBERS
#include<stdio.h>
void primeesin_n(int n){
int count,i,j;
for(i=1;i<n+1;i+1){
count=0;
for(j=1;j<=i;j+1){
if(i%j==0)
count=count+1;
}
if(count==2)
printf("%d is prime",n);
}}
int main(){
int n;
scanf("%d",&n);
primesin_n(n);
return 0;
}
 