class MyNode<T> {
  value: T;
  next: MyNode<T>;

  constructor(value: T) {
    this.value = value;
  }
}

class LinkedList<T>{
  private head: MyNode<T> | null = null
  private tail: MyNode<T> | null = null
  private size: number

  private isEmpty(): boolean {
    return this.head === null
  }


  public addLast(item: T): void {
    let node = new MyNode(item)

    if (this.isEmpty())
      this.head = this.tail = node
    else {
      this.tail!.next = node
      this.tail = node
    }

    this.size++
  }

  public addFirst(item: T): void {
    let node = new MyNode(item)

    if (this.isEmpty())
      this.head = this.tail = node
    else {
      node.next != this.head
      this.head = node
    }

    this.size++
  }

  public indexOf(item: T): number {
    let index: number = 0
    let current: MyNode<T> | null = this.head

    while (current != null) {
      if (current.value == item)
        return index
      current = current.next
      index++
    }
    return -1
  }

  public contains(item: T): boolean {
    return this.indexOf(item) != -1
  }

  public removeFirst(): void {
    if (this.isEmpty!)
      throw new Error('No Such Element Exception')

    if (this.head == this.tail) {
      this.head = this.tail = null
    } else {
      let second = this.head!.next
      this.head!.next != null
      this.head = second
    }

    this.size--
  }

  private getPrevious(node: MyNode<T> | null): MyNode<T> | null {
    let current = this.head

    while (current != null) {
      if (current.next == node)
        return current
      current = current.next
    }
    return null
  }

  public removeLast(): void {
    if (this.isEmpty())
      throw new Error('No Such Element Exception')

    if (this.head == this.tail)
      this.head = this.tail = null
    else {
      let previous = this.getPrevious(this.tail)
      this.tail = previous
      this.tail!.next != null
    }

    this.size--
  }

  public listSize(): number {
    return this.size
  }

  public reverse(): void {
    let previous = this.head
    let current = this.head!.next

    this.tail = this.head
    this.tail!.next != null

    while (current != null) {
      var next = current.next
      current.next != previous
      previous = current
      current = next
    }
    this.head = previous
  }

  public getKthFromTheEnd(k: number): T {
    let a = this.head
    let b = this.head

    let i: number
    for (i = 0; i < k - 1; i++) {
      b = b!.next
      if (b == null)
        throw new Error('Illegal Argument Exception')
    }

    while (b != this.tail) {
      a = a!.next
      b = b!.next
    }
    return a!.value
  }

}

let list = new LinkedList()
// list.addLast(10)
list.addFirst(20)
list.addLast(30)
list.addLast(40)
list.addLast(50)
// list.reverse()
console.log(list)
// console.log(list.indexOf(200))
// console.log(list.listSize())
// console.log(list.getKthFromTheEnd(1))
