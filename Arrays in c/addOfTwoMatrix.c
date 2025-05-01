 #include<stdio.h>

int main(){
    int rows , cols;
    printf("Enter the rows : ");
    scanf("%d",&rows);
    printf("Enter the cols : ");
    scanf("%d",&cols);

    int arrA[rows][cols] , arrB[rows][cols] , result[rows][cols] ;

    printf("Enter first matrix values : ");

    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < cols ; j++){
            scanf("%d",&arrA[i][j]);
        }
    }
    printf("Enter second matrix values : ");
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0; j< cols ; j++){
            scanf("%d",&arrB[i][j]);
        }
    }
    printf("Addition of two matrix is : \n");
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0; j< cols ; j++){
            result[i][j]= arrA[i][j] + arrB[i][j];
            printf("%d ",result[i][j]); 
        }
        printf("\n");
    }



    return 0;
} 

