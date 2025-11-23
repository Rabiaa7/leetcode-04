#include<stdio.h>
int tribo(int n){
    int x;
 if(n==0){
    return 0;
 }
 if(n==1 || n==2){
    return 1;
 }
 x=tribo(n-1)+tribo(n-2)+tribo(n-3);
    return x;
}
int main(){
    int n;
    int y;
    printf("enter number:");
    scanf("%d",&n);
   y =tribo(n);
   printf(" output: %d",y);
    return 0;
}
