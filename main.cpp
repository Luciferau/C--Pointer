#include <stdio.h>
#include <stdlib.h>

int defineBuffPoint();
int definePoint();

int defineBuffPoint()
{
	int ages[6] = { 21,22,20,22,20,21 };
	int* p1;
	p1 = ages;
	//�������������������ĵ�һ����Ա�ĵ�ַ
	int* p2;
	p2 = &ages[0];
	//p1 and p2 ͬһ������ages[]

}
int definePoint()//ָ��Ķ���
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