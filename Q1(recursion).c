#include<stdio.h>
int stairs(int n){
  int x;
    if(n==0 || n==1){
        return 1;
    }
   x= stairs(n-1) + stairs(n-2);
    
    return x;
}
int main(){
    int n;
    printf("enter number of steps: ");
    scanf("%d",&n);
   int y= stairs(n);
   printf("chances=%d",y);
    return 0;
}
