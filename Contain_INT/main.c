#include <stdio.h>
#include <stdlib.h>
void print_INT(int matrix[30][30],int R, int C);
void enterIndex_INT(int matrix[30][30],int R, int C);
int contain_INT(int m1[30][30],int m2[30][30],int R1,int C1,int R2,int C2);

int main()
{
    int R1=0,R2=0,C1=0,C2=0;
    int m1[30][30],m2[30][30],m3[30][30];
    printf("Enter row 1: ");
    scanf("%d",&R1);
    printf("Enter column 1: ");
    scanf("%d",&C1);
    printf("Enter index of the matrix 1: \n");

    enterIndex_INT(m1,R1,C1);
    print_INT(m1,R1,C1);

    printf("\n\n");
    printf("Enter row 2: ");
    scanf("%d",&R2);
    printf("Enter column 2: ");
    scanf("%d",&C2);
    printf("Enter index of the matrix 2: \n");

    enterIndex_INT(m2,R2,C2);
    print_INT(m2,R2,C2);


    printf("\n\nContain ?: %d", contain_INT(m1,m2,R1,C1,R2,C2));
    return 0;



}
