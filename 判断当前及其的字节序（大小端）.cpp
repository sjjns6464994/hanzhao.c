//判断大小端
// int check_sys()
// {
//     int a = 1;
//     char* p = (char*)&a;
//     if(*p == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

int check_sys()
{
    int a = 1;
    char* p == (char*) & a;//int*
    return *p;//返回1表示小端，返回0表示大端
}

int main()
{
    int ret = check_sys();
    if( ret == 1)
    {
        printf("小端\n");
    }   
    else
    {
        printf("大端\n");
    }
    system("pause");
    return 0;
}