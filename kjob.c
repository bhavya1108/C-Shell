#include "headers.h"

void kjob(char **args, int no_args)
{
    if(no_args != 3)
        printf("Please provide correct number of arguments.\nFormat is `kjob <jobNumber> <signalNumber>`");
    
    int job_no = atoi(args[1]), signal = atoi(args[2]);
    if (job_no > back_g)
    {
        printf("Invalid Job ID\n");
        return;
    }

    kill(jobs[job_no-1].PID, signal);
}