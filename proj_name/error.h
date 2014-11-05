#ifndef PROJ_NAME_ERROR_H
#define PROJ_NAME_ERROR_H

#include <proj_name/common.h>

BEGIN_C_DECLS

extern void debug_warning (const char* msg);
extern void debug_error (const char* msg);
extern void debug_fatal (const char* msg);

END_C_DECLS
#endif
