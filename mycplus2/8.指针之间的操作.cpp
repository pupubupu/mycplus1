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
//	//ָ��ӷ�������ǰ���ָ�����ͣ�int��Ϊ��λ������Ӽ��ģ���ptr1Ϊ��׼���ƫ��4��int�ռ�
//	ptr3 = ptr1 + 4;
//	printf("\nadding an int to a pointer: \n");
//	printf("ptr1 + 4= %p, *(ptr4 + 3) = %d\n", ptr1 + 4, *(ptr1 + 3));
//
//	ptr1++; // ����ָ�룺ָ���ƶ�����һ��int���ͱ����ڴ�ռ�
//	printf("\nvalues after ptr1++\n");
//	printf("ptr1 = %p,*ptr1 = %d��&ptr1 = %p\n",ptr1,*ptr1,&ptr1);
//
//	ptr2--; // �ݼ�ָ�룺ָ���ƶ�����һ��int���ͱ����ڴ�ռ�
//	printf("\nvalues after --ptr2\n");
//	printf("ptr2 = %p,*ptr2 = %d,&ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//
//	--ptr1; // �ָ�Ϊ��ʼֵ
//	++ptr2;// �ָ�Ϊ��ʼֵ
//	printf("\nPointers reset to original values:\n");
//	printf("ptr1 = %p,ptr2 = %p\n", ptr1, ptr2);
//
//	//һ��ָ���ȥ��һ��ָ�룺������ַ������õ�����������ַ֮�������ٸ�Ԫ�أ�������int��
//	printf("insubtracting one pointer from another : \n");
//	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %lld\n",ptr2, ptr1,ptr2 - ptr1);
//
//	//һ��ָ���ȥһ������������ָ�����ͣ�int��Ϊ��λ������Ӽ��ģ���ptr1Ϊ��׼��ǰƫ��2��int�ռ�
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