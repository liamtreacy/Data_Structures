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
    void print();
    int size();

private:
    Node* head = nullptr;
};