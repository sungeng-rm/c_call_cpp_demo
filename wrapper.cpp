#include "wrapper.h"
#include "core.h"


#ifdef __cplusplus
extern "C" {
#endif

void* create_instance(void)
{
    return new hello();
}
void  destory_instance(void* thiz)
{
    delete static_cast<hello*>(thiz);
}
void call_core(void* thiz, int* data)
{
    std::vector<int> test_data(data,data+10);

    static_cast<hello*>(thiz)->sayhello(test_data);
}

#ifdef __cplusplus
};
#endif