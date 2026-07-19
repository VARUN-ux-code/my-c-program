#include<stdio.h>
long long powerlog(long long base, int expo){
    if(expo==0) return 1; 
    long long x= powerlog(base, expo/2);
    if(expo%2==0) return x*x; 
    else return x*x*base;
    
}
int main(){
    long long  base; 
    printf("Enter base :");
    scanf("%lld",&base);
    int expo;
    printf("Enter exponent :");
    scanf("%d",&expo);
    printf("The power is %lld\n",powerlog(base, expo));
    return 0;
}
