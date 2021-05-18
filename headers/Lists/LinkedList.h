#include "List.h"
#include "../Node.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
namespace Jakubyte
{
    template <class T>
    class LinkedList : public List<T>
    {
    public:
        LinkedList() : m_head(nullptr), m_tail(nullptr), m_current(nullptr){};
        LinkedList(T o)
        {
            Node<T> *node = new Node<T>{o, nullptr};
            m_current = m_tail = m_head = node;
            List<T>::size++;
        };

        // core functions
        void addHead(T o)
        {
            Node<T> *node = new Node<T>{o, m_head};
            m_head = node;
            List<T>::size++;
        };
        // void addTail(T o);

        void add(T o)
        {
            addHead(o);
        }

        bool contains(T o)
        {
            Node<T> *current = m_head;

            while (current != nullptr)
            {
                if (current->val == o)
                {
                    return true;
                }

                current = current->next;
            }

            return false;
        };
        // size_t size();
        // int containsAtIndex(T o);
        // void remove(T o);
        // T removeAtIndex(int index);

        // iterator functions
        // Iterator begin();
        // Iterator end();

    private:
        Node<T> *m_head;
        Node<T> *m_tail;
        Node<T> *m_current;
    };
}
#endif