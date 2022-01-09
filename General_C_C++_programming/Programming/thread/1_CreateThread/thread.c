#include<pthread.h>

#include<stdio.h>

#include<unistd.h>//for sleep()

#include<stdlib.h>//for srand() and rand()
#include<time.h>
int glb1=0;
int glb2=0;
void* randomANumber(void* p)
{
    if(p!=NULL)
    {
        if((*(int*)p)==1)
        {
            printf("Thread enter function with argument: %d\n", *(int*)p);
            glb1=rand();
            sleep(1);
            *(int*)p=2;//change value to see the result
            
            printf("Thread says good bye\n");
            pthread_exit(p);
            printf("Print after terminate this thread\n");//this will not be executed
        }
    }
    else
    {
        printf("This function is called from parent\n");
        glb2=rand();
    }
}

int main()
{
    pthread_t myThread;
    srand(time(NULL));
    int arg=1;
    printf("The child carry item %d\n",arg);
    pthread_create(&myThread,NULL,randomANumber,&arg);
    printf("Do own stuff after told my child to do its thing\n");
    randomANumber(NULL);
    printf("Here I am, a parent waiting waiting for my child\n");
    int * ptr;
    pthread_join(myThread,&ptr);
    printf("Gift from my child: %d\n",*(ptr));
    printf("The child return with item %d\n",arg);
    return 0;
}