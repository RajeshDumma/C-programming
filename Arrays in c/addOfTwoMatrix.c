 #include<stdio.h>

int main(){
    int rows , cols;
    printf("Enter the rows : ");
    scanf("%d",&rows);
    printf("Enter the cols : ");
    scanf("%d",&cols);

    int arrA[rows][cols] , arrB[rows][cols] , result[rows][cols] ;


    if()
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



// validation matrix  :

#include<stdio.h>

int main(){
    int firstRows , firstCols , secondRows , secondCols;
    printf("Enter the number of rows in first matrix : ");
    scanf("%d",&firstRows);
    printf("Enter the number of cols in first matrix : ");
    scanf("%d",&firstCols);
    printf("Enter the number of rows in second matrix : ");
    scanf("%d",&secondRows);
    printf("Enter the number of cols in second matrix : ");
    scanf("%d",&secondCols);
    
    if(firstRows == secondRows && firstCols == secondCols){

    int arrA[firstRows][firstCols] , arrB[secondRows][secondCols] , result[firstRows][firstCols] ;

    printf("Enter first matrix values : ");

    for(int i = 0; i < firstRows ; i++){
        for(int j = 0; j < firstCols ; j++){
            scanf("%d",&arrA[i][j]);
        }
    }
    printf("Enter second matrix values : ");
    for(int i = 0 ; i < secondRows ; i++){
        for(int j = 0; j< secondCols ; j++){
            scanf("%d",&arrB[i][j]);
        }
    }
    printf("Addition of two matrix is : \n");
    for(int i = 0 ; i < firstRows ; i++){
        for(int j = 0; j< firstCols ; j++){
            result[i][j]= arrA[i][j] + arrB[i][j];
            printf("%d ",result[i][j]); 
        }
        printf("\n");
    }

    } else{
        printf("Addition of two matrices are not posiable\nrows and columns in the matrices are not exqual");
    }

    return 0;
}

// Subtraction in two D Array :


#include<stdio.h>

int main(){
    int firstRows , firstCols , secondRows , secondCols;
    printf("Enter the number of rows in first matrix : ");
    scanf("%d",&firstRows);
    printf("Enter the number of cols in first matrix : ");
    scanf("%d",&firstCols);
    printf("Enter the number of rows in second matrix : ");
    scanf("%d",&secondRows);
    printf("Enter the number of cols in second matrix : ");
    scanf("%d",&secondCols);
    
    if(firstRows == secondRows && firstCols == secondCols){

    int arrA[firstRows][firstCols] , arrB[secondRows][secondCols] , result[firstRows][firstCols] ;

    printf("Enter first matrix values : ");

    for(int i = 0; i < firstRows ; i++){
        for(int j = 0; j < firstCols ; j++){
            scanf("%d",&arrA[i][j]);
        }
    }
    printf("Enter second matrix values : ");
    for(int i = 0 ; i < secondRows ; i++){
        for(int j = 0; j< secondCols ; j++){
            scanf("%d",&arrB[i][j]);
        }
    }
    printf("Subtraction of two matrix is : \n");
    for(int i = 0 ; i < firstRows ; i++){
        for(int j = 0; j< firstCols ; j++){
            result[i][j]= arrA[i][j] - arrB[i][j];
            printf("%d ",result[i][j]); 
        }
        printf("\n");
    }

    } else{
        printf("Subtraction of two matrices are not posiable\nrows and columns in the matrices are not exqual");
    }

    return 0;
}

