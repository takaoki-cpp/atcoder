#include <cstdio>

#define min(a, b) (a < b ? a : b)

int main()
{
    int no_of_operations, k;
    scanf("%d %d", &no_of_operations, &k);

    int value = 1;
    while(no_of_operations--)
        value += min(k, value);


    printf("%d\n", value);
    return 0;
}
