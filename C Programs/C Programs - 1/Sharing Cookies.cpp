#include <cstdio>

int main()
{
	int a_cookies, b_cookies;
	scanf("%d %d", &a_cookies, &b_cookies);

	printf(a_cookies%3 == 0 || b_cookies%3 == 0 || (a_cookies + b_cookies)%3 == 0 ? "Possible\n" : "Impossible\n");
	return 0;
}
