class Queue<T>{
    public storage: T[] = []
    
    constructor(private capacity: number = Infinity) { }

    public enqueue(item: T):void{

        if(this.size() === this.capacity)
            throw new Error('Queue Has Reached Max Capacity')

        this.storage.push(item)
    }

    public dequeue(): T | undefined {
        return this.storage.shift()
    }

    public size(): number {
        return this.storage.length
    }
}

let queue = new Queue

queue.enqueue(true)
queue.enqueue('Hello')
queue.enqueue(23)

console.log(queue.dequeue());
console.log(queue.storage);
// console.log(queue.size());