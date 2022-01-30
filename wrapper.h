#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void* create_instance(void);
void  destory_instance(void*);
void call_core(void* , int* data);

#ifdef __cplusplus
};
#endif