/*Find the second largest elements in the given array?*/
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]= {1,3,4,2,4,3,1,2};
    int max=INT_MIN;
    int smax= INT_MIN;
    for(int i=0; i<8; i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if (smax>arr[i]&& max!=arr[i]){
            smax= arr[i];
        }
    }
    printf("%d ",smax);
    return 0;

}
