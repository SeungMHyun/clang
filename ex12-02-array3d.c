/*
3차원 배열
*/

#include <stdio.h>

int main(void)
{
    short sarr[2][3][4];
    int iarr[2][3][4];

    printf("size of sarr : %d \n", sizeof(sarr));
    printf("size of iarr : %d\n", sizeof(iarr));
    printf("\n\n\n\n");
    int arr[2][3][4] =
    {
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {13,14,15,16},
            {17,18,19,20},
            {21,22,23,24}
        }
    };

    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            for(int k=0 ; k<4 ; k++)
                {
                    printf(" %d", arr[i][j][k]);
                    printf(" ");
                }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}