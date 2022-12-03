/**
 * Project Untitled
 */


#ifndef _HANDSETBRANDABSTRACTTION_H
#define _HANDSETBRANDABSTRACTTION_H

class HandsetSoftImplementor;
class HandsetBrandAbstracttion {
public: 
    virtual ~HandsetBrandAbstracttion();

    virtual void Run() = 0;
    
/**
 * @param imp
 */
    void SetHandsetSoftImplementor(HandsetSoftImplementor * imp);
protected: 
    HandsetSoftImplementor * implementor;
};

#endif //_HANDSETBRANDABSTRACTTION_H
