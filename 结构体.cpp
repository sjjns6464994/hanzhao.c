#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct  B
{
    char c;
    short s;
    double d;
};

struct Stu
{
    //成员变量
    struct B sb;
    char name[20];
    int age;//年龄
    char id[20];
};//s1,s2;//s1和s2也是结构体变量
//s1,s2是全局变量
void printf1(struct Stu t)
{
    printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}
void printf2(struct Stu* ps)
{
    printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}
int main()
{
    //s是局部变量
    struct Stu s = {{'w', 20, 3.14}, "张三", 30, "20200534"};//对象   
    //.  ->
    printf("%c ", s.sb.c);
    printf("%s\n", s.id);//学号是个字符串

    struct Stu* ps = &s;
    printf("%c\n", (*ps).sb.c);
    printf("%c\n", ps -> sb.c);
    printf1(s);
    printf2(&s);
    system("pause");
    return 0;
}
