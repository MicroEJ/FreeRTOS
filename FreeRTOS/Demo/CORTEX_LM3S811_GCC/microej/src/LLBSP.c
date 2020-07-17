/*
 * C
 *
 * Copyright 2020 MicroEJ Corp. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be found with this software.
 */

#include "LLBSP_impl.h"

extern void _etext(void);
uint8_t LLBSP_IMPL_isInReadOnlyMemory(void* ptr)
{
  return ptr < &_etext;
}

/**
 * Writes the character <code>c</code>, cast to an unsigned char, to stdout stream.
 * This function is used by the default implementation of the Java <code>System.out</code>.
 */
void LLBSP_IMPL_putchar(int32_t c)
{
  putchar(c);
}
