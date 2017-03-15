#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);
  Node *p = list->head;
  int max = list->head->data;
  Node *maxPointer;
  while (p != NULL){
    if (p->data > max)
      max = p->data;
    p = p->next;
  }
  
  p = list->head;
  while (p != NULL){
    if (p->data == max){
      maxPointer = p;
      break;
    }
    p = p->next;
  }

  return maxPointer;
   
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  Node *p = list->head;
  int min = list->head->data;
  Node *minPointer;
  while (p != NULL){
    if (p->data < min)
      min = p->data;
    p = p->next;
  }
  
  p = list->head;
  while (p != NULL){
    if (p->data == min){
      minPointer = p;
      break;
    }
    p = p->next;
  }

  return minPointer;
}


// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  Node *p = list->head;
  int max = list->head->data;
  while (p != NULL){
    if (p->data > max)
      max = p->data;
    p = p->next;
  }

  return max;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  Node *p = list->head;
  int min = list->head->data;
  while (p != NULL){
    if (p->data < min)
      min = p->data;
    p = p->next;
  }

  return min;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  if (list->head == NULL)
    return 0;

  Node *p = list->head;
  int mySum;
  while (p != NULL){
    mySum += p->data;
    p = p->next;
  }
  return mySum;
}

/* void deleteNodeIteratively (LinkedList *list, int value){ // deletes all nodes with data equal to value
  /* Node *p = list->head;
  Node *q;
  while (p->data == value){
    q = p;
    delete q;
    if (p->next == NULL) break;
    list->head = list->head->next;
    p = p->next;
  }

  p = list->head;
  while (p != NULL){
    if (p->data == value){
      q = p;
      delete q;
    }
    p = p->next;
  }

  list->tail = p; 
  
  Node* iter; Node* before; Node* discard;
  for (iter=list->head; iter != NULL; iter = iter->next){
    list->head = iter;
    before = iter;
    if (list->data == value){
      discard = iter->next;
      before->next = discard->next;
      delete discard;
    }
    if (iter->next == NULL) list->tail = iter;
  }
  } */
