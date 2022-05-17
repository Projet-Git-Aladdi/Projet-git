//
// Created by erwan on 17/05/2022.
//

#ifndef PROJET_GIT_DOUBLYLINKEDLIST_H
#define PROJET_GIT_DOUBLYLINKEDLIST_H

typedef unsigned short Digit;

typedef struct Node {
    Digit digit;
    struct Node* next;
    struct Node* previous;
} Node;

typedef struct DoublyLinkedList {
    Node* start;
    Node* end;
} DoublyLinkedList;

extern int               addDigitAtStart                  (DoublyLinkedList* doublyLinkedList, const Digit digit);
extern int               addDigitAtEnd                    (DoublyLinkedList* doublyLinkedList, const Digit digit);
extern int               isNodeEmpty                      (const Node* node);
extern DoublyLinkedList* createDoublyLinkedList           (void);
extern DoublyLinkedList* createDoublyLinkedListFromString (const char* digitString);
extern char              digitToChar                      (const Digit digit);
extern void              deleteDoublyLinkedList           (DoublyLinkedList* doublyLinkedList);
extern int               getDoublyLinkedListLength        (const DoublyLinkedList* doublyLinkedList);
extern void              removeStartFromDoublyLinkedList  (DoublyLinkedList* doublyLinkedList);
extern void              removeEndFromDoublyLinkedList    (DoublyLinkedList* doublyLinkedList);
extern Digit             getDigitByPlaceFromStart         (const DoublyLinkedList* doublyLinkedList, const unsigned int place);

// //
#endif //PROJET_GIT_DOUBLYLINKEDLIST_H
