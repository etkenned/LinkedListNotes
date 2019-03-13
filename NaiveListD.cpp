#include <iostream>
#include "NaiveList2.h"

using namespace std;

ListNode::ListNode()
{

}
ListNode::ListNode(int d)
{
  data = d;
  next = Null; //nullptr
} //overloaded constructor
ListNode::~ListNode();
{
  //look it up
}

NaiveList2::NaiveList()
{
  front = NULL;
  size = 0;
  back = NULL;
}
NaiveList2::~NaiveList()
{
  //look it up
}

unsigned int NaiveList2::getSize()
{
  return size;
}
void NaiveList2::printList()
{
  ListNode *curr = front;
  while(curr->next != NULL)
  {
    cout << curr->data << endl;
    curr = curr->next;
  }
}

void NaiveList2::insertFront(int d)
{
  ListNode *node = new ListNode(d);
  if(size == 0)
  {
    back = front;
    front = node;
    size++;
  }
  else
  {
    front->prev = node;
    node->next = front;
    front = node;
    size++;
  }

}

void NaiveList2::insertBack(int d)
{
  ListNode *node = new ListNode(d);

  if(size == 0)
  {
    front = back;
  }
  else
  {
    back->next = node;
    node->prev = back;
  }
  back = node;
  size++;
}

int NaiveList::removeFront()
{
  int temp = front->data;
  ListNode *ft = front;
  front = front->next; //changes front to next in line
  ft->next = NULL;
  delete ft;
  size --;
  return temp;
}

int NaiveList::find(int d) //aka search
{
  int idx = -1;
  ListNode *curr = front;

  while(curr->next != NULL)
  {
    ++idx;
    if(curr->data == d)//we found it
    {
      break;
    }
    else
    {
      curr = curr->next;
    }
  }
  if(curr == NULL)//value does not exist in list
  {
      idx = -1;// tells us that there is no value in the list
  }
  return idx;
}

int NaiveList::remove(int d)
{
  int pos = find(d)
  deletPos(pos);
}

int NaiveList::deletePos(int pos)
{
  int idx = 0;

  ListNode *curr = front;
  ListNode *prev = front;

  while(idx != pos)
  {
    prev = curr;
    curr = curr->next;
    ++idx;
  }

  prev->next = curr->next;
  curr->next = NULL;
  int temp = curr->data;
  delete curr;
  size--;

  return temp;
}
