g++ wrapper.cpp core.cpp  -c
ar rvs libhello.a wrapper.o core.o
gcc c_call_cpp.c -c
g++ c_call_cpp.o libhello.a -o hellotest
rm -f libhello.a wrapper.o core.o c_call_cpp.o