#include <cstdio>

#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int main()
{
    int x_cities, y_cities, x_capital, y_capital;
    scanf("%d %d %d %d", &x_cities, &y_cities, &x_capital, &y_capital);

    const int oo = 1e9;

    int max_x_city = -oo;
    while(x_cities--)
    {
        int x;
        scanf("%d", &x);

        max_x_city = max(max_x_city, x);
    }

    int min_y_city = oo;
    while(y_cities--)
    {
        int y;
        scanf("%d", &y);

        min_y_city = min(min_y_city, y);
    }

    printf(x_capital < y_capital && max_x_city < min_y_city && max_x_city < y_capital && x_capital < min_y_city ? "No War\n" : "War\n");
    return 0;
}
