#include <stdio.h>

int main() {
    int n;
    printf("����������ĳ���: ");
    scanf("%d", &n);

    int nums[1000];
    printf("����������Ԫ��: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int currentMax = 0; // ��ǰ����������
    int globalMax = 0; // ȫ������������

    for (int i = 0; i < n; i++) {
        currentMax = currentMax + nums[i];
        if (currentMax < 0) {
            currentMax = 0;
        }
        if (globalMax < currentMax) {
            globalMax = currentMax;
        }
    }

    printf("��������������Ϊ: %d\n", globalMax);

    return 0;
}