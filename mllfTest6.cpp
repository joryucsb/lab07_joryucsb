#include "linkedListFuncs.h"
#include "moreLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;
int main() {

  int size1List[1] = {37};

  LinkedList *list = arrayToLinkedList(size1List,1);
  assertEquals("[37]->null", linkedListToString(list), "linkedListToString(list)");

  deleteNodeIteratively (list, 37);
  assertTrue(list->head == NULL);
  assertTrue(list->tail == NULL);

  assertEquals("NULL", linkedListToString(list), "list after deleting 37");

  deleteNodeIteratively (list, 42);
  assertTrue(list->head->data == 37);
  assertTrue(list->tail->data == 37);

  assertEquals("[37]->NULL",linkedListToString(list), "list after deleting 42");
  
  return 0;
}

