#include <stdio.h>
#include <stdlib.h>

int defineBuffPoint();
int definePoint();

int defineBuffPoint()
{
	int ages[6] = { 21,22,20,22,20,21 };
	int* p1;
	p1 = ages;
	//数组名，就是这个数组的第一个成员的地址
	int* p2;
	p2 = &ages[0];
	//p1 and p2 同一个变量ages[]

}
int definePoint()//指针的定义
{
	int salary = 30000;
	int * p;
	int *p1, p2;
	//int * (p1, p2);
	p = &salary;
	printf("%d %d \n", salary,*p);
	printf("%d %d \n ", salary,p);

	return 0;
}

int main()
{
	definePoint();
	return 0;
}