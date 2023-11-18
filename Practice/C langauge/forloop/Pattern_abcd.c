/*
a
bb
ccc
dddd
eeeee
*/

#include <stdio.h>
void main()
{
    int row, colum;
    for (row = 0; row <= 4; row++)
    {
        for (colum = 0; colum <= row; colum++)
        {
            printf("%c", row + 'a');
        }
        {
            printf("\n");
        }
    }
}