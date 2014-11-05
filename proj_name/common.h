#ifndef PROJ_NAME_COMMON_H
#define PROJ_NAME_COMMON_H

#ifdef __cplusplus
#   define BEGIN_C_DECLS extern "C" {
#   define END_C_DECLS }
#else   /* !__cplusplus */
#   define BEGIN_C_DECLS 
#   define END_C_DECLS 
#endif  /* __cplusplus */

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdio.h>
#include <sys/types.h>

#if HAVE_STRINGS_H
#include <strings.h>
#endif

#if HAVE_STDLIB_H
#include <stdlib.h>
#endif

#if HAVE_UNISTD_H
# include <unistd.h>
#endif

#if HAVE_ERRNO_H
# include <errno.h>
#endif

#ifndef errno
extern int errno;
#endif

#ifndef EXIT_SUCCESS
# define EXIT_SUCCESS 0
# define EXIT_FAILURE (-1)
#endif

BEGIN_C_DECLS

extern void* xcalloc(size_t num, size_t size);
extern void* xmalloc(size_t num);
extern void* xrealloc(void* p, size_t num);

#endif
