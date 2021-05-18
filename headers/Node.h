#ifndef NODE_H
#define NODE_H
namespace Jakubyte
{
    template <class N>
    struct Node
    {
        N val;
        Node *next;
    };
}
#endif