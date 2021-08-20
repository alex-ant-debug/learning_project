#include "touch_thread.h"

/* Touch Thread entry function */
void touch_thread_entry(void)
{
    /* TODO: add your own code here */
    while (1)
    {
        tx_thread_sleep (1);
    }
}
