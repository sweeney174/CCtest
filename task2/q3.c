#include <stdio.h>
#define B "booboo"
#define X 10
int main()
{
    int age;
    char name;
    printf("Please enter your first name.\n");
    scanf("%s", &name);
    printf("All right, %c, what's your age?\n", name);
    scanf("%f", &age);
    int xp;
    xp = age + X;
    printf("That's a %s! You must be at least %d.\n", B, xp);
    return 0;
}
