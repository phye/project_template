#if HAVE_CONFIG_H
#   include <config.h>
#endif

#include <proj_name/common.h>
#include <proj_name/error.h>

static void error (int exit_status, const char* mode, const char* msg);

static void 
error (int exit_status, const char* mode, const char* msg)
{
    fprintf(stderr, "%s: %s.\n", mode, msg);
    if (exit_status < 0)
        exit (exit_status);
}

void debug_warning(const char* msg)
{
    error(0, "WARNING", msg);
}

void debug_error(const char* msg)
{
    error(0, "ERROR", msg);
}

void debug_fatal(const char* msg)
{
    error(EXIT_FAILURE, "FATAL", msg);
}

