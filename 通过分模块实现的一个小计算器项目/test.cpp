#include "test.h"
#include "add.h"
#include "sub.h"
#include "multiplication.h"
#include "division.h"
//#导入静态库  
//pragma commrnt(lib, "sub.lib")

int main()
{
    int a = 10;
    int b = 20;
    int c = Add(a, b);
    printf("加%d\n", c);
    int d = Sub(a, b);
    printf("减%d\n", d);
    int e = Multiplication(a, b);
    printf("乘%d\n", e);
    int f = Division(b ,a);
    printf("除%d\n", f);
    system("pause");
    return 0; 
}


