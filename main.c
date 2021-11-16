#include <stdio.h>

int main()
{
    int BHSM[2][5];//2D array
    int r,c;
    for (r=0;r<=1;r++)
    {
        for(c=0;c<=4;c++)
        {
            scanf("%d",&BHSM[r][c]);

        }
    }
    printf("OUTPUT in 2*5 matrix\n");
    for (r=0;r<=1;r++)
    {
        for (c=0;c<=4;c++)

        {
            printf("%d\t",BHSM[r][c]);
        }
     printf("\n");
    }
    return 0;
}
