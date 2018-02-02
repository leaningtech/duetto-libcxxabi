//===-------------------------- abort_message.h-----------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef __ABORT_MESSAGE_H_
#define __ABORT_MESSAGE_H_

#include "cxxabi.h"

#ifdef __cplusplus
extern "C" {
#endif

_LIBCXXABI_HIDDEN _LIBCXXABI_NORETURN void
#ifdef __CHEERP__
__attribute__((cheerp_genericjs))
#endif
abort_message(const char *format, ...) __attribute__((format(printf, 1, 2)));

#ifdef __cplusplus
}
#endif

#endif

