#include <stdio.h>
int main()
{
    int count = 0;
    int is_continue = 1;

    while (is_continue)
    {
        char *name;
        int age;
        scanf("%s", name);
        scanf("%d", &age);
        printf("name = %s,age = %d\n", name, age);
        count++;
        printf("Do you want to continue?\n");
        scanf("%d",&is_continue);

    }
    printf("Your times of operations is %d",count);

    return 0;
}