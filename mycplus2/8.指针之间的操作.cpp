//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main()
//{
//	int urn[5] = { 100,200,300,400,500 };
//	int *ptr1, *ptr2, *ptr3;
//	ptr1 = urn;
//	ptr2 = &urn[2];
//
//	printf("pointer value,dereferenced pointer, pointer address:\n");
//	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//
//	//指针加法：结果是按照指针类型（int）为单位进行相加减的，以ptr1为基准向后偏移4个int空间
//	ptr3 = ptr1 + 4;
//	printf("\nadding an int to a pointer: \n");
//	printf("ptr1 + 4= %p, *(ptr4 + 3) = %d\n", ptr1 + 4, *(ptr1 + 3));
//
//	ptr1++; // 递增指针：指针移动到下一个int类型变量内存空间
//	printf("\nvalues after ptr1++\n");
//	printf("ptr1 = %p,*ptr1 = %d，&ptr1 = %p\n",ptr1,*ptr1,&ptr1);
//
//	ptr2--; // 递减指针：指针移动到上一个int类型变量内存空间
//	printf("\nvalues after --ptr2\n");
//	printf("ptr2 = %p,*ptr2 = %d,&ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//
//	--ptr1; // 恢复为初始值
//	++ptr2;// 恢复为初始值
//	printf("\nPointers reset to original values:\n");
//	printf("ptr1 = %p,ptr2 = %p\n", ptr1, ptr2);
//
//	//一个指针减去另一个指针：两个地址相减，得到的是两个地址之间相差多少个元素（这里是int）
//	printf("insubtracting one pointer from another : \n");
//	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %lld\n",ptr2, ptr1,ptr2 - ptr1);
//
//	//一个指针减去一个整数：按照指针类型（int）为单位进行相加减的，以ptr1为基准向前偏移2个int空间
//	printf("\nsubtracting an int from a pointer : \n");
//	printf("ptr3 = %p, ptr3 - 2 = %p, *(ptr3 - 2) = %d\n",ptr3, ptr3 - 2, *(ptr3 - 2));
//
//
//
//
//
//	return 0;
//
//}