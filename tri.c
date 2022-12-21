#include <stdio.h>
void permut(int Tab[], int ind1, int ind2)
{
    int c;
    c = Tab[ind1];
    Tab[ind1] = Tab[ind2];
    Tab[ind2] = c;
}
int main()
{
    int size;
    scanf("%d", &size);
    int T[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &T[i]);
    }
    printf("Liste non triée :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", T[i]);
    }
    for (int i = size - 1; i > 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            if (T[j - 1] > T[j])
            {
                permut(T, j - 1, j);
            }
        }
    }
    printf("Liste triée :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", T[i]);
    }
    return 0;
}