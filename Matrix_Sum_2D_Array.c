#include <stdio.h>
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
     //declaring variables.r for row,c for column & array name and size
    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r); //scanning the number of rows
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c);  //scanning the number of columns

    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
         //entering the elements for first matrix using nested for loop
    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }      //entering the elements for first matrix using nested for loop

    // Adding Two matrices

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    // Displaying the result
    printf("\nSum of two matrix is: \n\n");

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",sum[i][j]);

            if(j==c-1)      //condition
            {
                printf("\n\n");
            }
        }

    return 0;
}
