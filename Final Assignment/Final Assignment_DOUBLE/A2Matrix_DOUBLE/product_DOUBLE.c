#include "A2Matrix_DOUBLE.h"
int product_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30])
{
    int i,j,r;
    double sum;
    if (C1==R2)
    {
     for (i=1;i<=R1;i++)
     {
        for (j=1;j<=C2;j++)
       {
           sum=0;
           for (r=1;r<=R1;r++)
           {
               sum+=matrix1[i][r]*matrix2[r][j];
           }
           matrix3[i][j]=sum;
       }
     }

     return 1;
    }
    else
    {  printf("Dimension Error!!!");
        return 0;}
}
