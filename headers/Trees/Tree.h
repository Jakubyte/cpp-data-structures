#include "../Node.h"

#ifndef TREE_H
#define TREE_H
namespace Jakubyte
{
    template <class T>
    class Tree
    {
    public:
        Tree() : m_left(nullptr), m_right(nullptr){};
        Tree(T o) : m_value(o), is_initialised(true), m_left(nullptr), m_right(nullptr){};

    private:
        T m_value;
        bool is_initialised = false;
        Node<Tree<T>> *m_left;
        Node<Tree<T>> *m_right;
    }
}
#endif TREE_H