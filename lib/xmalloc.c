#if HAVE_CONFIG_H
#include <proj_name/config.h>
#endif

#include <proj_name/common.h>
#include <proj_name/error.h>

void *
xmalloc (size_t num)
{
    void* new = malloc(num);
    if (!new)
        debug_fatal("Memory exhausted");
    return new;
}

void *
xrealloc (void* p, size_t num)
{
    void* new;
    if (!p)
        return xmalloc(num);

    new = realloc (p, num);
    if (!new)
        debug_fatal("Memory Exhausted");

    return new;
}

void* 
xcalloc (size_t num, size_t size)
{
    void *new = xmalloc(num*size);
    bzero(new, num*size);
    return new;
}
