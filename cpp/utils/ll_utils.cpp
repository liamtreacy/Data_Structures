#include "ll_utils.h"
#include "../linked_lists/linked_list.h"

#include <vector>
#include <iostream>
#include <algorithm>

bool LinkedListUtils::hasUniqueElements(LinkedList& ll)
{
    // Assumption that LL is not circular
    Node* n = ll.getHead();

    for (; n != nullptr; n = n->next)
    {
        for (Node* r = n->next; r != nullptr; r = r->next)
        {
            if (n->data == r->data)
                return false;
        }
    }

    return true;
}

void LinkedListUtils::removeDuplicates(LinkedList& ll)
{
    std::vector<int> v;

    Node* t = ll.getHead();
    Node* prev = nullptr;

    while (t != nullptr)
    {
        if (std::find(v.begin(), v.end(), t->data) == v.end())
        {
            v.push_back(t->data);
            prev = t;
            t = t->next;
        }
        else
        {
            Node* s = t;

            prev->next = s->next;
            delete s;
            s = nullptr;
            t = prev->next;
        }
    }
}
