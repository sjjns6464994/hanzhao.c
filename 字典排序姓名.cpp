#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    char name[10];
    double wage, wavewage, outwage, money;
};

int compare(const void *a, const void *b) {
    return strcmp(((Employee *)a)->name, ((Employee *)b)->name);//升序
    // return strcmp(((Employee *)a)->name, ((Employee *)b)->name);//降序
}

int main()
{
    int i, j, k, N;
    struct Employee a[100];
    scanf("%d", &N);
    FILE *fp1;
    fp1 = fopen("D:\\codeC\\文件\\outfile.txt", "w");
    if (fp1 == NULL)
    {
        perror("文件打开错误");
        return 1;
    }
    for (i = 0; i < N; i++)
    {
        scanf("%s %lf %lf %lf", a[i].name, &a[i].wage, &a[i].wavewage, &a[i].outwage);
        a[i].money = a[i].wage + a[i].wavewage - a[i].outwage;
    }
    qsort(a, N, sizeof(Employee), compare);
    for (i = 0; i < N; i++)
    {
        fprintf(fp1,"%s %0.2lf", a[i].name, a[i].money);
    }
    fclose(fp1);
    system("pause");
    return 0;
}