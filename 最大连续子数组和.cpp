#include <stdio.h>

int Maxarry(int n, int* nums)
{
    int currentMax = 0; // 当前最大子数组和
    int globalMax = 0; // 全局最大子数组和
    int hasPositive = 0; // 是否存在正数

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            hasPositive = 1; // 存在正数
        }
        currentMax = currentMax + nums[i];
        if (currentMax < 0) {
            currentMax = 0;
        }
        if (globalMax < currentMax) {
            globalMax = currentMax;
        }
    }

    // 如果数组中均为负数，则最大子数组和为0
    if (!hasPositive) {
        globalMax = 0;
    }

    return globalMax;
}

int main() {
    int n;
    printf("请输入数组的长度: ");
    scanf("%d", &n);

    int nums[1000];
    printf("请输入数组元素: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int globalMax = Maxarry(n, nums);
    printf("最大连续子数组和为: %d\n", globalMax);

    return 0;
}
