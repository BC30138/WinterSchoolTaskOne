#ifndef _HASHTABLE_H_
#define _HASHTABLE_H_
#include <iostream> 
#include "ListNode.hpp"

class HashTable
{
  private:
    ListNode *values;
    unsigned int base;

  public:
    HashTable(unsigned int base) : base(base) { values = new ListNode[base]; }
    void Insert(int newValue)
    {   
        ListNode *temp = &values[newValue % base];   
        while(temp->next != NULL)
        {
            temp = temp->next;
        } 
        temp->Insert(newValue);
    }
    
    void preview() {
        for (unsigned int it = 0; it < base; ++it) {
            std::cout << it << " :";
            ListNode *temp = &values[it];
            while (temp->next != NULL)
            {
                std::cout << " " << temp->value;
                temp = temp->next;
            }
            std::cout << std::endl;
        }
    }
};

#endif