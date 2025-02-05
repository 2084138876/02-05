//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////冒泡排序的核心思想是：相邻的两个元素进行比较和交换
//
//
//void bubble_sort(int arr[],int sz)
//{
//	//n个元素要进行n-1趟冒泡排序
//	int i = 0;
//	for (i = 0; i < sz -1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= sz - 1; j++)//每经过一次冒泡排序，需要进行冒泡排序的总数就少一个
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//		
//	}
//}
//
//
//
//int main()
//{
//	int arr[10] = { 7,2,5,4,3,6,1,8,9,10 };
//	//使用冒泡排序把数组arr倒序排放
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	bubble_sort(arr,sz);
//	//遍历数组，查找结果
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//
//	}
//	return 0;
//}