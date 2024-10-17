//(2)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    char name[10];
    double wage, wavewage, outwage, money;
};
int compare(void const *a, void const *b)
{
    return strcmp(((employee *)a)->name, ((employee *)b)->name);
}
int main()
{
    int N, i, j, k;
    FILE *fp1;
    scanf("%d", &N);
    struct employee a[100];
    fp1 = fopen("D:\\codeC\\文件\\outfile.txt", "w");
    if (fp1 == NULL)
    {
        perror("文件打开失败");
        return 1;
    }
    for (i = 0; i < N; i++)
    {
        scanf("%s %lf %lf %lf", a[i].name, &a[i].wage, &a[i].wavewage, &a[i].outwage);
        a[i].money = a[i].wage + a[i].wavewage - a[i].outwage;
    }
    qsort(a, N, sizeof(employee), compare);
    for (i = 0; i < N; i++)
    {
        fprintf(fp1, "%s %0.2lf\n", a[i].name, a[i].money);
    }
    for (i = 0; i < N; i++)
    {
        printf("%s %0.2lf\n", a[i].name, a[i].money);
    }
    fclose(fp1);
    system("pause");
    return 0;
}
