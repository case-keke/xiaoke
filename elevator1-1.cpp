#include<stdio.h>
#include<math.h>
int main()
{
	int floor[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d 0 0\n", C);//打印开始运行时状态
	int i;
	i = fabs(A - C);
	printf("%d %d 1\n", A, i);//打印到达人员所在楼层时状态
	i = fabs(A - C) + fabs(A - B);
	printf("%d %d 0\n", B, i);//打印到达目标楼层时状态
	return 0;
}