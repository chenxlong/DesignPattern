#ifndef CTHREADPOOL_H
#define CTHREADPOOL_H

#include <thread>
#include <queue>
#include <functional>
#include <vector>
#include <mutex>
#include <condition_variable>


using namespace std;

#define THREADPOOL_MAX_THREAD 10
class CThreadPool
{
public:
    CThreadPool();
    ~CThreadPool();

    CThreadPool(CThreadPool &) = delete;
    CThreadPool& operator=(CThreadPool&) = delete;

    typedef function<void (void)> fnTask;

private:
    queue<fnTask> m_taskQueue; //任务队列
    condition_variable m_condition;//任务队列信号量
    mutex m_mutex; //任务队列锁
    vector<thread *> m_threadVector;//线程数组
    bool m_bStart;

private:
    fnTask Take();//获取任务
    void ThreadLoop();//线程执行函数
public:
    void AddTask(const fnTask & tsk); //添加任务
    void StartThreadPool();
    void StopThreadPool();
};

#endif // CTHREADPOOL_H
