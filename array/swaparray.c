#include<stdio.h>
void swap(int arr[]){
    int temp = arr[0];
    arr[0]= arr[1];
    arr[1]= temp; 
}
int main(){
    int arr[2]= {12, 45};
    printf("The value of array before swaping is %d,%d\n",arr[0],arr[1]);
    swap(arr);
    printf("The value of arry after swaping is %d,%d\n",arr[0],arr[1]);
    return 0;
}
 
