#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//有 n 张音乐会门票，每张门票都有一定的价格。然后，m 个顾客陆续到来。
//
//每位顾客宣布他们愿意为一张门票支付的最高价格，然后，他们将得到一张价格尽可能接近的门票，且不超过最高价格。
//
//输入
//第一行输入 n 和 m：门票数量和顾客数量。
//
//下一行包含 n 整数 h：每张票的价格。
//
//最后一行包含 m 整数 t：每个顾客愿意支付的最高价格
//
//输出
//打印每位顾客购买门票的价格。之后，就不能再购票了。
//
//如果顾客买不到票，则打印 −1。

int* hasi;

int compare(const void* a, const void* b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;

    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}
int binary_search(int* arr, int n, int target) {
    int left = 0, right = n - 1;
    int pos = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target) {
            pos = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return pos;
}

int reset(int idel_index)
{
    if (idel_index < 0) return -1;

    if (idel_index == hasi[idel_index])
    {
        return idel_index;
    }
    else {
        return hasi[idel_index] = reset(hasi[idel_index]);
    }
}

int main(void)
{
    int n = 0;
    int m = 0;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int* arr1 = (int*)malloc(n * sizeof(int));
    if (arr1 == NULL) return 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    hasi = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        hasi[i] = i;
    }

    qsort(arr1, n, sizeof(int), compare);

    int* arr2 = (int*)malloc(m * sizeof(int));
    if (arr2 == NULL)
        return 1;

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);

        int idel_index = binary_search(arr1, n, arr2[i]);

        int real_index = reset(idel_index);

        if (real_index != -1)
        {
            printf("%d\n", arr1[real_index]);

            hasi[real_index] = real_index - 1;
        }
        else
        {
            printf("-1\n");
        }
    }

    free(arr1);
    free(arr2);
    free(hasi);
    return 0;
}