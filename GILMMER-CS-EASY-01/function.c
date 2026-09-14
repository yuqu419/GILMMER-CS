#include <stdio.h>
void sort(int zh1, int zh2, int zh3)
{
    if (zh1 >= zh2 && zh2 >= zh3)
    {
        printf("小明 > 小强 > 小林");
    }
    else if (zh1 >= zh3 && zh3 >= zh2)
    {
        printf("小明 > 小林 > 小强");
    }
    else if (zh2 >= zh1 && zh1 >= zh3)
    {
        printf("小强 > 小明 > 小林");
    }
    else if (zh2 >= zh3 && zh3 >= zh1)
    {
        printf("小强 > 小林 > 小明");
    }
    else if (zh3 >= zh1 && zh1 >= zh2)
    {
        printf("小林 > 小明 > 小强");
    }
    else
    { // zh3 >= zh2 && zh2 >= zh1
        printf("小林 > 小强 > 小明");
    }
}
int get_zh(int x1, int x2, int x3)
{
    int p1 = (x1 + x2 + x3) / 3;
    int f1 = ((p1 - x1) * (p1 - x1) + (p1 - x2) * (p1 - x2) + (p1 - x3) * (p1 - x3)) / 3;
    int zh1 = 3 * p1 - f1 / 3;
    return zh1;
}
int main()
{
    int x1, x2, x3;
    int y1, y2, y3;
    int z1, z2, z3;

    printf("请输入小明的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("请输入小强的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &y1, &y2, &y3);
    printf("请输入小林的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &z1, &z2, &z3);
    int zh1 = get_zh(x1,x2,x3);
    int zh2 = get_zh(y1,y2,y3);
    int zh3 = get_zh(z1,z2,z3);
    sort(zh1,zh2,zh3);

    return 0;
}