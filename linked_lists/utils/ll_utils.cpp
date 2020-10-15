#include "ll_utils.h"
#include "../linked_lists/linked_list.h"

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

}