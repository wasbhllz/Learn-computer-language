// 24.02.11
#include <stdio.h>
int main()
{
    int y;
    y = 0;
    scanf("%d", &y);// 获取输入
    switch (y)
    {
        case 0: //case相当于情况1
            printf("风系小男孩:\n");
        case 1: //switch可以嵌套使用
        {
            y++;
            switch (y) 
            {
                case 1:
                    printf("流浪者\n");
                    y++;
                case 2:
                    printf("魈\n");
                    y++;
                case 3:
                    printf("温迪\n");
                    break; //break用来跳出当前循环
            }
            break;
        }
        case 2:
            printf("水系:\n达达利亚\n");
            break;
        default: // default用来提示不符合的输入
            printf("error\n");
            return 0;
    }

    return 0;
}