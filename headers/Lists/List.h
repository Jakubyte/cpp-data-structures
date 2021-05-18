#ifndef LIST_H
#define LIST_H

namespace Jakubyte
{
    // TODO - change to use std::size_t
    typedef unsigned long long size_t;

    template <typename T>
    class List
    {
    public:
        virtual void add(T o) = 0;
        virtual bool contains(T o) = 0;

    protected:
        size_t size;
    };
}

#endif