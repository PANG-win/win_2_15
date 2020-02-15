//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>
//#include <windows.h>
#include <malloc.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0, temp = 0;
//	temp = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (temp < arr[i])
//			temp = arr[i];
//	}
//	printf("%d\n", temp);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	printf("请输入10个数字并点击enter键\n");
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	/*int temp = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (temp < arr[i])
//			temp = arr[i];
//	}
//	printf("%d\n", temp);*/
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	printf("请输入10个数字并点击enter键\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	int temp = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (temp < arr[i])
//			temp = arr[i];
//	}
//	printf("%d\n", temp);
//	return 0;
//}
//struct student
//{
//	int data;
//	struct student* pnext;
//};
//int main()
//{
//
//	return 0;
//}
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef int ElemType;
typedef int Status;
typedef struct
{
	ElemType *elem;
	int length;
	int listsize;
}SqList;
Status Inilist_Sq(SqList &L)
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE* sizeof(ElemType));
	if (!L.elem)
		return -1;
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return 1;
}
void sort_Sq(SqList &L)
{
	int i, j, temp;
	int exchange;
	for (i = 0; i < L.length - 1; i++)
	{
		exchange = 0;
		for (j = L.length - 2; j >= i; j--)
		{
			if (L.elem[j + 1] < L.elem[j])
			{
				temp = L.elem[j + 1];
				L.elem[j + 1] = L.elem[j];
				L.elem[j] = temp;
				exchange = 1;
			}
		}
		if (!exchange)
			return;
	}
}
void displaylist_Sq(SqList &c)
{
	if (c.length == 0)
		printf("该操作后的集合为空！\n");
	for (int i = 0; i < c.length; i++)
	{
		if (c.elem[i] == c.elem[i + 1])
			continue;
		else
			printf("%d", c.elem[i]);
	}
	printf("\n");
}