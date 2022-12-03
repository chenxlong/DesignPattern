#include "threadpool.h"

CThreadPool::CThreadPool()
    :m_bStart(false)
{

}

CThreadPool::~CThreadPool()
{
    StopThreadPool();

    for(auto &item : m_threadVector)
    {
        if(item->joinable())
        {
            item->join();
        }
        delete item;
    }
    m_threadVector.clear();
}

CThreadPool::fnTask CThreadPool::Take()
{
    unique_lock<mutex> lck(m_mutex);
    if(m_taskQueue.empty() && m_bStart)
    {
        m_condition.wait(lck);
    }

    fnTask task = nullptr;
    if(!m_taskQueue.empty() && m_bStart)
    {
        task = m_taskQueue.front();
        m_taskQueue.pop();
    }

    return task;
}

void CThreadPool::ThreadLoop()
{
    while (m_bStart)
    {
        fnTask task = Take();
        if(task)
        {
            //this_thread::sleep_for(std::chrono::milliseconds(1));
            task();
        }
    }
}

void CThreadPool::AddTask(const CThreadPool::fnTask &tsk)
{
    unique_lock<mutex> lck(m_mutex);
    m_taskQueue.push(tsk);
    m_condition.notify_all();
}

void CThreadPool::StartThreadPool()
{
    m_bStart = true;

    for(int i = 0; i < THREADPOOL_MAX_THREAD; i++)
    {
        m_threadVector.push_back(new thread(bind(&CThreadPool::ThreadLoop, this)));
    }
}

void CThreadPool::StopThreadPool()
{
    unique_lock<mutex> lock(m_mutex);
    m_bStart = false;
    m_condition.notify_all();
}
