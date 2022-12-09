
#include <stdio.h>

struct	t_point
{
	int	 x;
	int  y;
};

int main()
{
	struct t_point a;
	struct t_point b;

	a.x = 3;
	a.y = 23;
	b = a;
	printf("%d", b.x + b.y);
}