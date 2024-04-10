#include <stdio.h>

int main() {
    int n;
    printf("请输入数组的长度: ");
    scanf("%d", &n);

    int nums[1000];
    printf("请输入数组元素: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int currentMax = 0; // 当前最大子数组和
    int globalMax = 0; // 全局最大子数组和

    for (int i = 0; i < n; i++) {
        currentMax = currentMax + nums[i];
        if (currentMax < 0) {
            currentMax = 0;
        }
        if (globalMax < currentMax) {
            globalMax = currentMax;
        }
    }

    printf("最大连续子数组和为: %d\n", globalMax);

    return 0;
}