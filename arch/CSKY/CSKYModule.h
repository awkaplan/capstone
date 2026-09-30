/* Capstone Disassembly Engine */
/* By Alex Kaplan <awkaplan@gmail.com>, 2026 */

#ifndef CS_CSKY_MODULE_H
#define CS_CSKY_MODULE_H

#include "../../utils.h"

cs_err CSKY_global_init(cs_struct *ud);
cs_err CSKY_option(cs_struct *handle, cs_opt_type type, size_t value);

#endif // CS_CSKY_MODULE_H
