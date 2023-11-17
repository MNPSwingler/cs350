#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{

    pid_t c_pid = fork();

    if (c_pid == -1)
    {

        perror("fork");

        exit(EXIT_FAILURE);
    }

    else if (c_pid > 0)
    {

        cout << "This is the parent process " << getpid() << endl;
    }

    else
    {

        cout << "This is the child process " << getpid() << endl;
    }

    return 0;
}