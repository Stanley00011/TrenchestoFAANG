#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
      //prompt user for hight input//
        n = get_int("Height: ");
    }
    //revert to step one when hight imput is less than 1 or > than 8 or wrong imput //
    while (n < 1);

    // start hight count from 1 //
    for (int i = 0; i < n; i++)
    {

        printf("#");
        }
        printf("\n");
    }