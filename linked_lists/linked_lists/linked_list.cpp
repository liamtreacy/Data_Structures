#include "linked_list.h"
#include <iostream>

LinkedList::~LinkedList()
{
    Node* r = head;
    Node* tmp;

    while (r != nullptr)
    {
        tmp = r;
        r = r->next;
        delete tmp;
        tmp = nullptr;
    }
}

void LinkedList::add(int data)
{
    if (head == nullptr)
    {
        head = new Node(data);
    }
    else
    {
        Node* r = head;

        while (r->next != nullptr)
        {
            r = r->next;
        }

        r->next = new Node(data);
    }
}

void LinkedList::remove(int data)
{

}

void LinkedList::print()
{
    Node* r = head;

    while (r != nullptr)
    {
        std::cout << r->data << " , ";
        r = r->next;
    }
}

int LinkedList::size()
{
    Node* r = head;
    int size = 0;

    while (r != nullptr)
    {
        size++;
        r = r->next;
    }
    return size;
}