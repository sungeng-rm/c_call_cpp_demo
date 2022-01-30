#include "core.h"

hello::hello(){};
hello::~hello(){};
void hello::sayhello(std::vector<int> data)
{
    for(int i =0; i<10 ;++i){
        std::cout<<data[i]<<std::endl;
    }
}