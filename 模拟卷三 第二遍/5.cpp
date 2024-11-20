#include <stdio.h>
int main()
{
	int i, j, k, flag, min, max, min_new, max_new, n, index, count = 0;
	int a[1000] = {0}, b[1000] = {0};//数组初始化一下 
	scanf("%d %d", &min, &max);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		min_new = 2 * a[i];//2
		max_new = 10 * a[i];//10
		for (j = min_new; j <= max_new; j++)
			b[j] = 1;
	}
	
	for (i = min; i <= max; i++)//1 - 12
	{
		if (b[i] == 0)
			count++;
	}
	printf("%d", count);
	return 0;
}



//#include <stdio.h>
//
//int main()
//{
//    int i, j, k, min, max, min_new, max_new, n, index, count = 0;
//    int a[1000] = {0}, b[1000] = {0}; // b 数组初始化为 0，表示默认可以放入
//    scanf("%d %d", &min, &max);
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//
//    // 标记不允许放入的鱼的大小
//    for (i = 0; i < n; i++)
//    {
//        min_new = 2 * a[i]; // 2
//        max_new = 10 * a[i]; // 10
//        for (j = min_new; j <= max_new; j++)
//        {
//            if (j >= 0 && j < 1000) // 确保 j 在数组 b 的有效范围内
//            {
//                b[j] = 1; // 标记为不可放入
//            }
//        }
//    }
//
//    // 计算允许放入的鱼的大小
//    for (i = min; i <= max; i++) // 1 - 12
//    {
//        if (b[i] == 0)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
