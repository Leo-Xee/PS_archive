#include <iostream>
using namespace std;;

// Node 선언
template <typename T>
class Node {
public:
    T data;
    Node *next;

    Node();
    Node(T data);
};

template <typename T>
Node<T>::Node() {
    next = nullptr;
}

template <typename T>
Node<T>::Node(T data) {
    data = data;
    next = nullptr; 
}

template <typename T>
class LinkedList {
public:
    Node<T> *head;
    Node<T> *tail;
    int size;

    LinkedList();   // 생성자
    ~LinkedList();  // 소멸자

    void add(Node *head, T data, int idx);
    void remove(Node *head, int idx);
    bool contains(Node *head, Node nodeTocheck);
    int size();
    void print();
};