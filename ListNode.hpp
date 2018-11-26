#ifndef _LISTNODE_H_
#define _LISTNODE_H_
#include <stddef.h>

class ListNode
{
  public:
    int value;
    ListNode *next;

    ListNode() : next(NULL), value(0) {}
    void Insert(int newValue)
    {
        this->value = newValue;
        ListNode *nextNode = new ListNode;
        next = nextNode;
    }
};

#endif