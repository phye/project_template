#include <proj_name/error.h>
#include <proj_name/common.h>

int main (void) 
{
    int pter = (int*) xmalloc(sizeof(int));
    *pter = 0xabcd1234;
    printf("%x\n", *pter);
    free(pter);
    return EXIT_SUCCESS;
}
