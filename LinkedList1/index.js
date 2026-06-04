// Node class
class Node {
  constructor(value) {
    this.data = value;
    this.next = null;
  }
}

// Linked List class
class LinkedList {
  constructor() {
    this.head = null;
  }

  // Insert at end
  insert(value) {
    const newNode = new Node(value);

    if (this.head === null) {
      this.head = newNode;
      return;
    }

    let temp = this.head;

    while (temp.next !== null) {
      temp = temp.next;
    }

    temp.next = newNode;
  }

  // Display list
  display() {
    let temp = this.head;
    let result = "";

    while (temp !== null) {
      result += temp.data + " -> ";
      temp = temp.next;
    }

    result += "NULL";
    console.log(result);
  }

  // Update node value
  update(oldValue, newValue) {
    let temp = this.head;

    while (temp !== null) {
      if (temp.data === oldValue) {
        temp.data = newValue;
        console.log("Node updated successfully.");
        return;
      }

      temp = temp.next;
    }

    console.log("Value not found.");
  }

  // Delete node by value
  deleteNode(value) {
    if (this.head === null) {
      console.log("List is empty.");
      return;
    }

    // Delete first node
    if (this.head.data === value) {
      this.head = this.head.next;
      console.log("Node deleted.");
      return;
    }

    let temp = this.head;//first node
    //value = 30
                 temp
    // [10,2#]->[20,null]->
    while (temp.next !== null && temp.next.data !== value) {
      temp = temp.next;
      console.log(temp.next.next,"here from while")
    }

    if (temp.next === null) {
      console.log("Value not found.");
      return;
    }

    temp.next = temp.next.next;
    console.log(temp.next,temp.next.next, "Here from node")
    console.log("Node deleted.");
  }
}

// Main
const list = new LinkedList();

// Insert
list.insert(10);
list.insert(20);
list.insert(30);
list.insert(40);

console.log("Original List:");
list.display();

// Update
list.update(20, 25);

console.log("After Update:");
list.display();

// Delete
list.deleteNode(30);

console.log("After Delete:");
list.display();
