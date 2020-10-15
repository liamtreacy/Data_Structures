#include "linked_list.h"
#include <iostream>

namespace
{
    void deletep(Node* p)
    {
        delete p;
        p = nullptr;
    }
}

LinkedList::~LinkedList()
{
    Node* r = head;
    Node* tmp;

    while (r != nullptr)
    {
        tmp = r;
        r = r->next;
        deletep(tmp);
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
    // This will only find and remove the first element to match the data
    Node* r = head;
    Node* prev = nullptr;

    while (r != nullptr)
    {
        if (r->data == data)
        {
            if (prev == nullptr)
            {
                Node* tmp = head;
                head = head->next;
                deletep(tmp);
                return;
            }
            else
            {
                prev->next = r->next;
                deletep(r);
                return;
            }
        }
        prev = r;
        r = r->next;
    }
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

Node* LinkedList::getHead()
{
    return head;
}