#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

    int add(int a, int b)
    {
        return a + b;
    }

#ifdef __cplusplus
}
#endif


int main(int argc, char const *argv[])
{
    printf("100 + 20 = %i.\n", add(100, 20));
    return 0;
}