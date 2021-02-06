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
    if (pos < 0 || pos > this.size) return;

    const newNode = new Node(data);
    let current, previous;
    current = this.head;

    // position이 0일 때
    if (pos === 0) {
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

  remove(data) {
    // 빈 리스트이면 null 반환
    if (!this.head) return null;

    let current, previous;
    current = this.head;
    previous = null;

    // 다음 노드가 없을 때까지 반복
    while (current.next !== null) {
      // 해당 data를 찾으면
      if (current.value === data) {
        // 삭제할 노드가 head이면
        if (previous === null) {
          this.head = current.next;
        } else {
          previous.next = current.next;
        }
        this.size--;
        return current.data;
      }
      previous = current;
      current = current.next;
    }
  }

  removeAt(pos) {
    if (pos < 0 || pos > this.size) return;

    let current, previous;
    current = this.head;

    if (pos === 0) {
      this.head = current.next;
    } else {
      let cnt = 0;
      while (cnt < pos) {
        previous = current;
        current = current.next;
        cnt++;
      }
      previous.next = current.next;
      this.size--;
      return current;
    }
  }

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
