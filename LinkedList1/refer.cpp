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
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Update node value
    void update(int oldValue, int newValue)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            if (temp->data == oldValue)
            {
                temp->data = newValue;
                cout << "Node updated successfully." << endl;
                return;
            }

            temp = temp->next;
        }

        cout << "Value not found." << endl;
    }

    // Delete node by value
    void deleteNode(int value)
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        // Delete first node
        if (head->data == value)
        {
            Node *toDelete = head;
            head = head->next;
            delete toDelete;

            cout << "Node deleted." << endl;
            return;
        }

        Node *temp = head;

        while (temp->next != NULL && temp->next->data != value)
        {
            temp = temp->next;
        }

        if (temp->next == NULL)
        {
            cout << "Value not found." << endl;
            return;
        }

        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

        cout << "Node deleted." << endl;
    }
};

int main()
{
    LinkedList list;

    // Insert
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Original List: ";
    list.display();

    // Update
    list.update(20, 25);

    cout << "After Update: ";
    list.display();

    // Delete
    list.deleteNode(30);

    cout << "After Delete: ";
    list.display();

    return 0;
}