#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[1000], arr2[1000];
	int i, j, k, length = 0;
	fgets(arr1, 1000, stdin);
	arr1[strcspn(arr1,"\n")] = '\0'; 
	strcpy(arr2, arr1);
	length = strlen(arr1);
	for (i = 0; i < length; i++)//这里注意用'a''A'进行加减 
	{
		if (arr1[i] >= 'a' && arr1[i] <= 'z')
		{
			arr1[i] = 'a' + ('z' - arr1[i]);
		}
		else if (arr1[i] >= 'A' && arr1[i] <= 'Z')
		{
			arr1[i] = 'A' + ('Z' - arr1[i]);
		}
	}
	printf("原码\n");
	for (i = 0; i < length; i++)
	{
		printf("%c", arr2[i]);
	}
	printf("\n密码\n"); 
	for (i = 0; i < length; i++)
	{
		printf("%c", arr1[i]);
	}
	return 0;
} 
