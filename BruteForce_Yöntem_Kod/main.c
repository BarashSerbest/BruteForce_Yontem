#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(0));  // Rastgele sayý üretmek için tohum atama
    int n = 10000;
    int i, arr[n], max = -2147483647;

    for (i = 0; i < n; i++) 
	{
        arr[i] = rand(); // Rastgele sayi atama
    }

    for (i = 0; i < n; i++) 
	{
        if (arr[i] > max) // max degeri bulma 
		{
            max = arr[i];
        }
    }

    printf("En buyuk sayi: %d\n", max);

    return 0;
}
