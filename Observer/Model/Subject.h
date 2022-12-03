/**
 * Project Untitled
 */


#ifndef _SUBJECT_H
#define _SUBJECT_H
#include <list>

using namespace std;

class Observer;
class Subject {
public: 
    
/**
 * @param observer
 */
    void Attach(Observer* observer);
    
/**
 * @param observer
 */
    void Detach(Observer * observer);
    
    void Notify();
protected: 
    list<Observer *> mObserver;
};

#endif //_SUBJECT_H
