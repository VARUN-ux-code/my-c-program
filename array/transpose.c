#include<stdio.h>
int main(){
    int r ,c; 
    printf("Enter number of rows and number of columns :");
    scanf("%d %d",&r,&c);
    int arr[r][c];
  
    for(int i = 0; i<r; i++){
          printf("Enter the digit in %d row :",i);
        for(int j = 0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
       printf("\n");
    }
    int trans[c][r];
    for(int i = 0; i<c; i++){
        for(int j = 0; j<r; j++){
            trans[i][j] = arr[j][i];
        }
    }
    printf("The transpose of given matrix is :\n");
    for(int i = 0; i<c; i++){
        for(int j = 0; j<r;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0; 
}
