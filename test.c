#include<stdio.h>

int main()
{
	char  a[5] = { '2', '2', '3', '4','5' };
	//printf("%d\n", sizeof(a));         //     5   a代表整个数组  ，  数据类型char 的大小* 数组大小
	//printf("%d\n", sizeof(a + 0));      //     4    a降级使用 表示首元素的地址，  地址 的大小 就是4 个字节
	//printf("%d\n", sizeof(*a));       //     1    a降级使用 表示首元素的地址 *解引用 表示第一个元素‘1’ 
	//printf("%d\n", sizeof(a + 1));     //  4



	printf("%d\n", sizeof(a[1]));     //     1     表示第一个元素‘1’  char类型 所以 大小为1  
	printf("%d\n", sizeof(&a));       //     4     &表示取地址 相当于指针 所以大小为4  
										//      注意： 此时 a 表示整个数组 ，所以 此时的地址为整个数组的地址
	printf("%d\n", sizeof(&a + 1));   //     4     此时 a 表示整个数组 ,&a 表示整个数组的地址 
										// +1  表示以前面的标准(整个数组) 向后移一位，此时地址为下一个数组的地址
	printf("%d\n", sizeof(&a[0]));    //     4     表示第一个元素的地址
	printf("%d\n", sizeof(&a[0] + 1));  //     4    +1  表示以前面的标准(一个元素) 向后移一位  
														//此时表示第二个元素的地址</span>
	system("pause");
	return 0;
}