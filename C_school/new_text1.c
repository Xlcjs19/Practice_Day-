/*任务：输出图案：
*
***
******
********
******
***
*

*/
#include<stdio.h>

int main()
{
    int i,k;
    for(i=1; i<3; i++)//01循环（ 4
    {
        for( k=0 ; k<2*i-1  ; k++   )
        {
            printf("*");   //每行输出的*号
        }
        printf("\n");     //每次循环换行
    }
    /*中间循环体*/
        for( k=0 ; k<2*i  ; k++   ) //02循环 （6
        {
            printf("*");   //每行输出的*号
        }
        printf("\n");     //每次循环换行

		for( k=0 ; k<2*i+2  ; k++   ) //03循环 （8
        {
            printf("*");   //每行输出的*号
        }
        printf("\n");     //每次循环换行

        for( k=0 ; k<2*i  ; k++   ) //04循环 （6
        {
            printf("*");   //每行输出的*号
        }
        printf("\n");     //每次循环换行

    int a,b;
    for(a=2; a>0; a--)//01循环（ 4
    {
        for( b=0 ; b<2*a-1  ; b++   )
        {
            printf("*");   //每行输出的*号
        }
        printf("\n");     //每次循环换行
    }

}
