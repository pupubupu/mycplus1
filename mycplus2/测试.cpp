//#include<stdio.h>
//#include<stdlib.h>
//
//struct data_t
//{
//	double value;
//	int order;
//	int rank;
//	char str[30];
//} list[200002];
///**********Begin**********/
//
//int main()
//{
//	int i, n;
//	//	for (n = 0; scanf("%s", list[n].str) != EOF; n++)
//	//	{
//	//		list[n].value = atof(list[n].str);
//	//		list[n].order = n;
//	//	}
//	list[0].value = 4;
//	list[0].order = 0;
//	list[1].value = 5;
//	list[1].order = 1;
//	list[2].value = 5;
//	list[2].order = 2;
//	list[3].value = 5;
//	list[3].order = 3;
//	list[4].value = 5;
//	list[4].order = 4;
//	list[5].value = 6;
//	list[5].order = 5;
//	n = 6;
//
//	int flag = 0;
//	int sequence = 1;
//	for (int j = 0; j < n; j++) {
//		int index;
//		for (int l = 0; l < n; l++) {
//			if (list[l].rank == 0) {
//				index = l;
//				break;
//			}
//		}
//		for (int k = 0; k < n; k++) {
//			if (list[k].value > list[index].value && list[k].rank == 0)index = k;
//			else if (list[k].value == list[index].value && list[k].rank != 0 && k != index) {
//				sequence--;
//			}
//		}
//		list[index].rank = sequence++;
//	}
//
//
//
//	for (i = 0; i < n; i++)
//	{
//		if (i != 0) putchar(' ');
//		printf("%d:%s", list[i].rank, list[i].str);
//	}
//	return 0;
//}
//
///**********End**********/