#include <stdio.h>
int main()
{
	int i, j, k, flag, min, max, min_new, max_new, n, index, count = 0;
	int a[1000] = {0}, b[1000] = {0};//�����ʼ��һ�� 
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
//    int a[1000] = {0}, b[1000] = {0}; // b �����ʼ��Ϊ 0����ʾĬ�Ͽ��Է���
//    scanf("%d %d", &min, &max);
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//
//    // ��ǲ�����������Ĵ�С
//    for (i = 0; i < n; i++)
//    {
//        min_new = 2 * a[i]; // 2
//        max_new = 10 * a[i]; // 10
//        for (j = min_new; j <= max_new; j++)
//        {
//            if (j >= 0 && j < 1000) // ȷ�� j ������ b ����Ч��Χ��
//            {
//                b[j] = 1; // ���Ϊ���ɷ���
//            }
//        }
//    }
//
//    // ��������������Ĵ�С
//    for (i = min; i <= max; i++) // 1 - 12
//    {
//        if (b[i] == 0)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
