//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////ð������ĺ���˼���ǣ����ڵ�����Ԫ�ؽ��бȽϺͽ���
//
//
//void bubble_sort(int arr[],int sz)
//{
//	//n��Ԫ��Ҫ����n-1��ð������
//	int i = 0;
//	for (i = 0; i < sz -1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= sz - 1; j++)//ÿ����һ��ð��������Ҫ����ð���������������һ��
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
//	//ʹ��ð�����������arr�����ŷ�
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	bubble_sort(arr,sz);
//	//�������飬���ҽ��
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//
//	}
//	return 0;
//}