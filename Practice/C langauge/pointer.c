#include <stdio.h>
void main()
{
	int a=43;
	int* ptr=&a;
	printf("%d\n",a);
	printf("%p\n",&a);//memory address of myAge
	printf("%p\n",ptr);//memory address of myAge with pointer
	printf("%d",*ptr);//he value of a with the pointer

}
/* 43
0000006f895ffae4
0000006f895ffae4
43 */