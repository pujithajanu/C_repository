#2.POSITIVE AND NEGATIVE
#include<stdlib.h>
#include<stdio.h>
void posneg(int n){
if(n>-n){
printf("+ve");}
else{
printf("-ve");}
}
int main(){
int n;
scanf("%d",&n);
posneg(n);
return 0;
}
