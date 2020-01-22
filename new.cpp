#include <iostream>
#include <cstring>
#include "list.h"

using namespace std;

void deleteHead(node* &head) {
  node* temp = new node;
  node* temp2 = new node;
  node* temp3 = new node;
  /*  temp -> next = temp2;
  temp -> data = head -> data;
  if (current -> next == NULL) {
    temp2 -> data = current -> data;
    display_all(temp);
  }
  else {
    deleteHead(head, current-> next);
  }
  */
  /*  temp -> next = temp2;
  temp -> data = NULL;
  temp2 -> next = head;
  temp2 -> data = NULL;
  display_all(temp); */ 
  //temp = head;
  //temp2 = temp -> next; 
  /*if (current -> next == NULL) {
    //cout << head -> data;
    //cout << current -> data; 
    return; 
  }
  if (current -> data < head -> data) {
    cout << "Swap";
    temp = head;
    temp -> data = head -> data;
    head-> data = current -> data;
    current -> data = temp -> data;
    deleteHead(head, current -> next);
  }
  else {
    deleteHead(head, current -> next); 
    }*/
  /*  if (current -> next -> next == NULL) {
    //current -> data = NULL;
    //current -> next -> data = NULL;
    //current = current -> next -> next; 
    //current -> next = current -> next -> next;
    //current -> data = NULL;
    //current -> next -> data = NULL;
    //current -> next == NULL;
    delete (current -> next);
    current -> next = NULL;
  }
  else {
    deleteHead(head, current -> next);
    } 
  */
  //node* temp = new node();
  //node* temp2 = new node();
  /*  if (current -> next == NULL) {
    current -> next = temp; 
    temp -> next = temp2;
  }
  else {
    deleteHead(head, current -> next); 
    } */ 
  /* temp = head;
  head = head -> next;
  delete temp;
  temp2 = head;
  head = head -> next;
  delete temp2; */
  temp -> data = head -> data;
  temp -> next = temp2; 
  if (head -> next -> next == NULL) {
    temp2 -> data = head -> next-> data;
    display_all(temp);
  }
  else {
    deleteHead(head -> next); 
  }
}
