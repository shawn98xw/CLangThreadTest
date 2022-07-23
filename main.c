#include <stdio.h>
#include "thread.h"
#include "thread-sync.h"

int x = 0;
mutex_t lock = MUTEX_INIT();
void add()
{
    for(int i = 0; i < 100000; i++)
    {
        mutex_lock(&lock);
        x++;
        mutex_unlock(&lock);
    }
}
int main()
{
    create(add);
    create(add);
    join();
    printf("x=%d", x);
}
