#include <iostream>

using namespace std;

class ListNode
{
  public:
    ListNode();
    ListNode(int d); //overloaded constructor
    ~ListNode();
    int data;// list node of integers
    ListNode *next; // pointer
};
class NaiveList
{
  private:
    ListNode *front;
    unsigned int size; // size cant be negative
  public:
    NaiveList();
    ~NaiveList();
    void insertFront(int d);
    int removeFront();
    void printList();
    int find(int d); // search method
    bool isEmpty();
    unsigned int getSize();  
};
