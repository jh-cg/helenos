/*
 * Copyright (c) 2006 Ondrej Palkovsky
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - The name of the author may not be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/** @addtogroup libcia32
 * @{
 */
/** @file
 */

#ifndef LIBC_ia32_FIBRIL_H_
#define LIBC_ia32_FIBRIL_H_

#include <types/common.h>
#include <libarch/fibril_context.h>

/*
 * According to ABI the stack MUST be aligned on
 * 16-byte boundary. If it is not, the va_arg calling will
 * panic sooner or later
 */
#define SP_DELTA  8

#define context_set(c, _pc, stack, size, ptls) \
	do { \
		(c)->pc = (sysarg_t) (_pc); \
		(c)->sp = ((sysarg_t) (stack)) + (size) - SP_DELTA; \
		(c)->tls = (sysarg_t) (ptls); \
		(c)->ebp = 0; \
	} while (0)

static inline uintptr_t context_get_fp(context_t *ctx)
{
	return ctx->ebp;
}

#endif

/** @}
 */
