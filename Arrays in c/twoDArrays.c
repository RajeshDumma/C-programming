#include<stdio.h>

int main(){

int arr[2][3], totalMarks = 0;

printf("Enter %d numbers : ",2*3);

for(int i = 0; i< 2; i++){
    for(int j =0 ; j<3;j++){
        scanf("%d",&arr[i][j]);
    }
}

printf("Student marks : \n");

for(int i = 0; i < 2; i++){
    printf("Student %d marks : ",i+1);

    for(int j = 0; j < 3 ; j++){
        printf("%d ",arr[i][j]);
        totalMarks += arr[i][j];
    }

    printf("totalMarks : %d",totalMarks);
    printf("\n");
    totalMarks = 0;
}

    return 0;
}