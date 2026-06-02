#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{

private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
};

void insert(int value){

    Node* newNode = new Node(value);//here new node created
    if(head == NULL){
        head = newNode;
        return;
    }//if no node created then newNode assigned to linkedList

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }//traverse to the last node
    temp->next= newNode;//after reachinf the last node when next == nul then this node got created their
}

int main()
{

    Node *n = new Node(10); // new node creation phase
    // LinkedList linked = new LinkedList();
    cout << n << endl;

    return 0;
}