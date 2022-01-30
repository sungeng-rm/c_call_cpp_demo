OBJS1 = wrapper.o core.o
OBJS2 = c_call_cpp.o
OBJS3 = libcpp.a
CC =gcc
++ =g++
CFLAGS += -c -Wall -g

mytest : $(OBJS1) $(OBJS2) $(OBJS3)
	$(++) $(OBJS1) -o $@
	$(CC) $(OBJS2) -o $@ 
	ar rvs $(OBJS3) $(OBJS1)
	$(++) $(OBJS2) $(OBJS3)	mytest

libcpp.a : $(OBJS1)
	ar rvs $(OBJS3) $^

clean :
	$(RM) *.o *.a mytest -r



 