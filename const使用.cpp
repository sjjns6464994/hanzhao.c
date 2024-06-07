#include <stdio.h>
int main()
{
//     int num = 10;
//     int* p = &num;
//     *p = 20;
//     printf("%d\n", num);

//2.
//const 修饰变量， 这个变量就被称为常变量，不能被修改，但是本质上还是变量
//
    const int num = 10;
    const int* p = &num;
    //const修饰指针变量的时候
    //const如果放在*的左边 修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
    //但是指针变量本身是可以修改的
    // *p = 20;err

    const* count p = &num;
    //const修饰指针变量的时候
    //count如果放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
    //但是指针指向的内容可以被改变
    int n = 100;
    *p = 20;
    p = &n;
    printf("%d\n", num);

    system("pause");
    return 0; 
}
