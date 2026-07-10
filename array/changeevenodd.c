/* Given an array of integers change the value of all odd indexed elements to its second multiple and increment
all even indexed value by 10?*/
#include <stdio.h>
int main()
{
    int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    for (int i = 0; i < 8; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
