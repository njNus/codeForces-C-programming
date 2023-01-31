#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;  // pointer to next element
};

struct Node* head;
