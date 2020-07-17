/*
 * C
 *
 * Copyright 2020 MicroEJ Corp. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be found with this software.
 */

#include "LLMJVM_impl.h"


int32_t LLMJVM_IMPL_initialize()
{
        return LLMJVM_OK;
}

int32_t LLMJVM_IMPL_vmTaskStarted()
{
        return LLMJVM_OK;
}

int32_t LLMJVM_IMPL_scheduleRequest(int64_t absoluteTime)
{
        return LLMJVM_OK;
}

int32_t LLMJVM_IMPL_idleVM()
{
        return LLMJVM_OK;
}

int32_t LLMJVM_IMPL_wakeupVM()
{
        return  LLMJVM_OK;
}

int32_t LLMJVM_IMPL_ackWakeup()
{
        return LLMJVM_OK;
}

int32_t LLMJVM_IMPL_getCurrentTaskID()
{
        return (int32_t) 123456;
}

void LLMJVM_IMPL_setApplicationTime(int64_t t)
{

}

int64_t LLMJVM_IMPL_getCurrentTime(uint8_t system)
{
   return 0;
}

int64_t LLMJVM_IMPL_getTimeNanos()
{
        return 0;
}

int32_t LLMJVM_IMPL_shutdown(void)
{
        return LLMJVM_OK;
}
