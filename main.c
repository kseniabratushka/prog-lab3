#include <stdio.h>

#define N 10

int main() 
{
    system("chcp 65001");
    int A[N] = {1, -2, 3, 1, 3, 3, 5, 1, -4, 5};
    int freq[100] = {0};
    int sum = 0;

    for (int i = 0; i < N; i += 1) 
    {
        if (A[i] > 0) 
        { 
            freq[A[i]]++;
        }
    }

    for (int i = 0; i < N; i += 1) 
    {
        if (A[i] > 0 && freq[A[i]] > 2) 
        {
            sum += A[i];
            freq[A[i]] = 0;
        }
    }

    printf("Сума додатних елементів, що зустрічаються більше двох разів: %d\n", sum);
    return 0;
}
