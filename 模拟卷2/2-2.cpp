//(2)����qsort���� 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 10
#define MAX_EMPLOYEES 100

// ����ְԱ�ṹ��
typedef struct
{
    char name[MAX_NAME_LENGTH + 1];
    float basic_salary;
    float floating_salary;
    float expenses;
    float net_salary;
} Employee;

// ð��������
void bubbleSort(Employee employees[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(employees[j].name, employees[j + 1].name) > 0)
            {
                // ����ְԱ��Ϣ
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
    printf("����ְԱ����: ");
    scanf("%d", &N);
    getchar(); // ������з�

    Employee employees[MAX_EMPLOYEES];

    // ����ְԱ��Ϣ
    for (int i = 0; i < N; i++)
    {
        printf("����� %d ��ְԱ���������������ʡ��������ʺ�֧��: ", i + 1);
        scanf("%s %f %f %f", employees[i].name, &employees[i].basic_salary, &employees[i].floating_salary, &employees[i].expenses);
        getchar(); // ������з�

        // ����ʵ������
        employees[i].net_salary = employees[i].basic_salary + employees[i].floating_salary - employees[i].expenses;
    }

    // ��ְԱ��Ϣ��������������
    bubbleSort(employees, N);

    // ��������ְԱ��Ϣ������ļ� outfile.txt
    FILE *outfile = fopen("outfile.txt", "w");
    if (outfile == NULL)
    {
        printf("�޷����ļ�\n");
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
    printf("ְԱ��Ϣ�ѳɹ�д�� outfile.txt �ļ���\n");
    system("pause");
    return 0;
}
