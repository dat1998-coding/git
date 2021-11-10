# Create a thread and basic info about thread
- <pthread.h>: lib for thread
- ID of thread: a thread associates with an id, type pthread_t
- pthread_create(): for creation of thread 
    + 1st para: addr of pthread_t; 2nd para: attributes of thread, can use NULL most of the time
    + 3rd para: routine funct with prototype: void* funct(void *P); 4th para: addr of argument of P
    + SUCC: return 0
    + UNSUCC: return -1, set errno
- pthread_exit(void*retval): thread exit, similar to exit, but apply for certain thread. Parameter is retval, an address of global var, var in heap or var in stack that is still in-used. (local thread var will be released)
- pthread_join()
    + 1st para: id of thread that current thread calling this funct wants to wait for
    + 2nd para: addr of return value that child thread send by pthread_exit(), type void**
    + if pthread_join not use, there may have a situation where parent thread finish execution but the child still not, the program still exit anyway (depend on which thread make exit execution first)=> parent thread want value return from child, wait for them to complete execution
# Note
- Remember to compile and run with <-pthread> flag

# Ref:
https://www.educative.io/edpresso/how-to-create-a-simple-thread-in-c
https://www.ibm.com/docs/en/zos/2.2.0?topic=functions-pthread-create-create-thread
