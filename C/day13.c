// 24.02.20
//结构体
/*
#include <stdio.h>
//`struct` 关键字用于声明一个结构体类型。
//`Stu` 是结构体的名称，它定义了结构体的模板，包括其中可以包含的数据类型和变量
struct stu { 
    char name[20];
    char nickname[20];
    int age;
    char race[20];
};

int main()
{
    struct stu p1 = {"雷电国崩","流浪者", 500, "人偶"}; //'p1'根据`Stu`结构体模板创建的一个实例，也就是一个变量
    printf("我老婆%s,我给他的爱称是%s,%d岁的长生种,是个%s~", p1.name, p1.nickname, p1.age, p1.race);
    return 0;
}
*/
//指针打印
# include <stdio.h>
struct hh{
char name[20];
int age;
char race[20];
};
int main(){
    struct hh a = {"魈", 1000, "仙人"};
    struct hh *b = &a; // 创建指向结构体的指针*b
    printf("%s\n%d\n%s", b->name, b->age, b->race); //用`->`来通过指针访问结构体的成员
    return 0;
}

