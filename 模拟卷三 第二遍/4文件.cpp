#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, t, index, h, flag = 0;
    char s1[32], s2[32], str[32][32];
    FILE *fp1, *fp2, *fp3;

    // ���ļ�
    fp1 = fopen("D:\\codeC\\�ļ�\\infile1.txt", "r");
    fp2 = fopen("D:\\codeC\\�ļ�\\infile2.txt", "r");
    fp3 = fopen("D:\\codeC\\�ļ�\\outfile.txt", "w");

    // ����ļ��Ƿ�ɹ���
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("���ļ�ʧ�ܣ�����\n");
        return -1;
    }

    // ��ȡ�ַ���
    fgets(s1, sizeof(s1), fp1);
    fgets(s2, sizeof(s2), fp2);

    // ȥ�����з�
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    int length = strlen(s2);//��ס  ţ�� 
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            str[i][j] = s2[(i + j) % length];
        }
        str[i][length] = '\0';
    }
//	for (i = 0, h = 0; h < length; i++, h++)
//    {
//        k = i;
//        for (j = k, t = 0; j < length; j++, t++)
//            str[h][t] = s2[j];
//        for (j = 0; j < k; j++, t++)
//            str[h][t] = s2[j];
//        str[h][t] = '\0';
//    }
     //������ɵ�ѭ����λ�ַ���
     for (i = 0; i < length; i++)
     {
         printf("%s\n", str[i]);
     }

    int length2 = strlen(s1);
    for (i = 0; i < length; i++)
    {
        if (strstr(str[i], s1) != NULL)  // ʹ�� strstr ��������Ӵ�
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("True\n");
        fprintf(fp3, "%s\n", s1);
    }
    else
    {
        printf("False\n");
    }

    // �ر��ļ�
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
