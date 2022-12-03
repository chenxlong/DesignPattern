/**
 * Project Untitled
 */


#ifndef _AGGREGATE_H
#define _AGGREGATE_H

class Iterator;
class Aggregate {
public: 
    virtual ~Aggregate();
    virtual Iterator * CreateIterator() = 0;
};

#endif //_AGGREGATE_H
