//(2)不用qsort函数 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 10
#define MAX_EMPLOYEES 100

// 定义职员结构体
typedef struct
{
    char name[MAX_NAME_LENGTH + 1];
    float basic_salary;
    float floating_salary;
    float expenses;
    float net_salary;
} Employee;

// 冒泡排序函数
void bubbleSort(Employee employees[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(employees[j].name, employees[j + 1].name) > 0)
            {
                // 交换职员信息
                Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int N;
    printf("输入职员人数: ");
    scanf("%d", &N);
    getchar(); // 清除换行符

    Employee employees[MAX_EMPLOYEES];

    // 输入职员信息
    for (int i = 0; i < N; i++)
    {
        printf("输入第 %d 个职员的姓名、基本工资、浮动工资和支出: ", i + 1);
        scanf("%s %f %f %f", employees[i].name, &employees[i].basic_salary, &employees[i].floating_salary, &employees[i].expenses);
        getchar(); // 清除换行符

        // 计算实发工资
        employees[i].net_salary = employees[i].basic_salary + employees[i].floating_salary - employees[i].expenses;
    }

    // 对职员信息按姓名进行排序
    bubbleSort(employees, N);

    // 将排序后的职员信息输出到文件 outfile.txt
    FILE *outfile = fopen("outfile.txt", "w");
    if (outfile == NULL)
    {
        printf("无法打开文件\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        fprintf(outfile, "%s %.2f\n", employees[i].name, employees[i].net_salary);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%s %.2f\n", employees[i].name, employees[i].net_salary);
    }
    fclose(outfile);
    printf("职员信息已成功写入 outfile.txt 文件。\n");
    system("pause");
    return 0;
}
