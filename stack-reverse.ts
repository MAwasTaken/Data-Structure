class MyStack<T> {
    private array: T[] = [];

    public pop(): T | undefined {
        if (this.isEmpty()) throw new Error('Empty Stack Exception');

        return this.array.pop();
    }

    public push(data: T): void {
        this.array.push(data);
    }

    public peek(): T {
        if (this.isEmpty()) throw new Error('Empty Stack Exception');

        return this.array[this.array.length - 1];
    }

    public isEmpty(): boolean {
        return this.array.length === 0;
    }
}

class StringReverser<T> {
    public reverse(input: string): string {
        let stack = new MyStack()
        let i: number

        if (input == null)
            throw new Error('Illegal Argument Exception')

        for (i = 0; i < input.length; i++)
            stack.push(input.charAt(i))

        let reversed = ""
        while (!stack.isEmpty())
            reversed += stack.pop()

        return reversed
    }
}

let reverser = new StringReverser()

console.log(reverser.reverse('abcd'))
// console.log(reverser.reverse(null))

