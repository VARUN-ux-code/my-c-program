#include<stdio.h>
/*long long  factorial(int n){
 if(n<=1)return 1;
 return n*factorial(n-1);
 }*/
long long factorial(int n, long long fact){
    if(n<=1) return fact; 
    return factorial(n-1,fact*n);
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
   
    printf("The factorial of %d is %lld\n",n,factorial(n,1));
    return 0;
}// there are two mathod of soloving factrial of a number 
