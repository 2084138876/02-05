#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组：是一组相同类型元素的集合。
//在c99 标准之前，数组的长度必须是常量或者常量表达式   int arr[10+5]    int arr[10]
//在c99 标准之后，数组的长度可以是变量，这是为了支持变长数组   例如：  
// int n=0;
// scanf("%d",&n);
// int arr[n];
// 变长数组是指数组的长度可以进行指定的数组，而不是指数组的长度可以变化
//变长数组是不能进行初始化的
//数组的初始化：在创建数组的时候给数组一些值
//若进行不完全初始化，则未初始化的部分，值是0
//数组是通过下标来访问的，下标是从0开始的
//数组的大小是可以计算的  例如：
// int arr[10]={1,2,3,4,5,6,7,8,9,10}
// int sz =sizeof(arr)/sizeof(arr[0])
//一维数组在内存中是连续存放的
