#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dogs;
    printf("Сколько у вас собак?\n");
    scanf("%d", &dogs);
    printf("Следовательно, у вас %d собак(а, и)!\n", dogs);
    return 0;
}
