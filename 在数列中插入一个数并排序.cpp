#include <stdio.h>

int main() {
    int a, b;
    int arr[100];
    int i, temp;
    
    // 使用scanf读取a和b的值，确保每次读取两个整数
    while (scanf("%d %d", &a, &b) == 2) {
        // 读取a个整数到数组中
        for (i = 0; i < a; i++) {
            scanf("%d", &arr[i]);
        }
        
        // 将b添加到数组的末尾（注意：这里假设a+1不超过数组大小）
        arr[a] = b;
        
        // 使用冒泡排序对数组进行排序
        for (i = a; i > 0; i--) {
            for (int j = 1; j <= i; j++) {
                if (arr[j] < arr[j - 1]) {
                    temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
        
        // 打印排序后的数组
        for (i = 0; i <= a; i++) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}