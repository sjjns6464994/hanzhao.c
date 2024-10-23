#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����������ַ���������ѭ����λ
void generateRotations(char *str, char rotations[30][30])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            rotations[i][j] = str[(i + j) % len];
        }
        rotations[i][len] = '\0';
    }
}

// ���������һ���ַ����Ƿ�����һ���ַ������Ӵ�
int isSubstring(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 > len2)
        return 0;
    
    for (int i = 0; i <= len2 - len1; i++)
    {
        if (strncmp(&str2[i], str1, len1) == 0)
            return 1;
    }
    
    return 0;
}

int main()
{
    char s1[30], s2[30];
    FILE *fp1, *fp2, *fpOut;
    
    // ���ļ�
    fp1 = fopen("D:\\codeC\\�ļ�\\infile1.txt", "r");
    fp2 = fopen("D:\\codeC\\�ļ�\\infile2.txt", "r");
    
    // ����ļ��Ƿ�ɹ���
    if (fp1 == NULL || fp2 == NULL)
    {
        perror("�޷����ļ�");
        return 1;
    }
    
    // ��ȡ�ļ�����
    fgets(s1, sizeof(s1), fp1);
    fgets(s2, sizeof(s2), fp2);
    
    // ȥ�����з�
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;
    
    // �ر��ļ�
    fclose(fp1);
    fclose(fp2);
    
    // ���� s2 ������ѭ����λ
    char rotations[30][30];
    generateRotations(s2, rotations);
    
    // ��� s1 �Ƿ�������һ��ѭ����λ����Ӵ�
    int found = 0;
    for (int i = 0; i < strlen(s2); i++)
    {
        if (isSubstring(s1, rotations[i]))
        {
            found = 1;
            break;
        }
    }
    
    // ������
    if (found)
    {
        printf("True\n");
        
        // д�� outfile.txt
        fpOut = fopen("D:\\codeC\\�ļ�\\outfile.txt", "w");
        if (fpOut == NULL)
        {
            perror("�޷�������ļ�");
            return 1;
        }
        fprintf(fpOut, "%s", s1);
        fclose(fpOut);
    }
    else
    {
        printf("False\n");
    }
    
    system("pause");
    return 0;
}
