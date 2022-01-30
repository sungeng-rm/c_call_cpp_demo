#include <stdio.h>
#include "wrapper.h"

int main(int argc ,char** argv)
{
    void* myhello =create_instance();
    printf("This is a simple sample of call CPP class function from C \r\n");

    int data[10]={1,2,3,4,5,6,7,8,9,10};
    
    call_core(myhello, data);

    destory_instance(myhello);
    return 0;

}