class Stack<T> {
  private array: T[] = [];

  public pop(): T | undefined {
    if (this.isEmpty()){
      throw new Error('Empty Stack Exception')
    }

    return this.array!.pop();
  }

  public push(data: T): void {
    this.array[this.array.length] = data
  }

  public peek(): T {
    if (this.isEmpty()){
      throw new Error('Empty Stack Exception')
    } 

    return this.array[this.array.length - 1]
  }

  public isEmpty(): boolean {
    return this.array.length === 0
  }
}

let stack = new Stack()

stack.push('Hello World!')
stack.push(2)
stack.push(true)
stack.push({ 'Name': 'Unknown' })

// console.log(stack.isEmpty())
// console.log(stack.peek())
console.log(stack.pop())

console.log(stack)
