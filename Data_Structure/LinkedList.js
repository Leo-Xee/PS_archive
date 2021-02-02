/*
LinkedList ADT
append(data): 
prepend(data):
insert(position, data)
remove(data): 
removeAt(position):
indexOf(data): 
isEmpty():
size(): 
*/

class Node {
  constructor(value, next = null) {
    this.value = value;
    this.next = next;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
    this.size = 0;
  }

  prepend(data) {
    const newNode = new Node(data);
    newNode.next = this.head;
    this.head = newNode;

    if (!this.tail) {
      this.tail = newNode;
    }
    this.size++;
  }

  append(data) {
    const newNode = new Node(data);
    // 빈 리스트일 때
    if (!this.head) {
      this.head = newNode;
      this.tail = newNode;
      return this.size++;
    }

    this.tail.next = newNode;
    this.tail = newNode;
    this.size++;
  }

  insertAt(pos, data) {
    if (pos < 0 || pos > this.size) {
      return;
    }
    const newNode = new Node(data);
    let current, previous;
    current = this.head;

    // position이 0일 때
    if (pos == 0) {
      newNode.next = this.head;
      this.head = newNode;
      // position이 0이 아닐 때
    } else {
      let cnt = 0;
      while (cnt < pos) {
        previous = current;
        current = current.next;
        cnt++;
      }
      previous.next = newNode;
      newNode.next = current;
    }
    this.size++;
  }

  remove(data) {}

  removeAt(pos, data) {}

  isEmpty() {
    if (!this.head) return true;
    else return false;
  }

  print() {
    let cur = this.head;
    let str = "";
    while (cur) {
      str += cur.value + " ";
      cur = cur.next;
    }
    console.log(str);
  }
}

let list = new LinkedList();
list.append(1);
list.append(2);
list.append(3);
list.append(4);
list.append(5);
list.insertAt(10, 10);
list.print();
