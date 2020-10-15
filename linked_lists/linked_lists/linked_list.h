#pragma once

struct Node
{
    Node(int data) : data(data), next(nullptr)
    {}

    int data;
    Node* next;
};

class LinkedList
{
public:
    LinkedList() = default;
    ~LinkedList();

    void add(int data);
    void remove(int data);
    void removePosition(int pos);
    void print();
    int size() const;
    Node* getHead();
    bool operator==(const LinkedList& rhs) const;
    bool operator!=(const LinkedList& rhs) const;

private:
    Node* head = nullptr;
};