#include <iostream>
#include "threadpool.h"

using namespace std;

int i = 1;
int main()
{
    CThreadPool::fnTask thFn = [=]
    {
        //cout << this_thread::get_id() << ":" <<  i++ << endl;
        cout << i++ << endl;
    };

    CThreadPool tp;
    for(int i = 0; i < 100; i++)
    {
        tp.AddTask(thFn);
    }
    tp.StartThreadPool();
    this_thread::sleep_for(std::chrono::milliseconds(2000));

    for(int i = 0; i < 15; i++)
    {
        tp.AddTask(thFn);
    }
    this_thread::sleep_for(std::chrono::milliseconds(1000));

    for(int i = 0; i < 8; i++)
    {
        tp.AddTask(thFn);
    }

    tp.StopThreadPool();

    getchar();

    return 0;
}
