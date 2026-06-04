#include <iostream>
using namespace std;

// Node class
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

// Linked List class
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // Insert at end
    void insert(int value)
    {
        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        // [10,#8781237981237]->[20,#98347928347]->[Null]

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display list
    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            //cout << temp->data << " -> ";//this was for gettitng data
            cout << temp->data << " ";//this was for increment
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    void updateNode(int OldValue, int newValue)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            if(temp->data == OldValue){
                temp->data = newValue;
                cout << "data updatedSuccessfully" << endl;
                return;
            }
            temp = temp->next;
        }
        
        cout << "Node not Found" << endl;
    }

    void deleteNode()
    {
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }


    }
};

int main()
{
    LinkedList list;

    // Insert
    list.insert(10);
    list.insert(20);
    list.display();
    list.updateNode(20, 30);
    list.display();
    return 0;
}

//   head           
// [20,#874392847]->[30,#734982374]

// Node *toDelete = head
// head = head->next
// delete toDelete