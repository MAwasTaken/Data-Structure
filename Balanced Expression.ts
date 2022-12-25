class NewStack<T> {

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

class Expression {

    private leftBrackets:string[] = ['(', '<', '[', '{']
    private rightBrackets:string[] = [')', '>', ']', '}']

    public isBalenced(input: string): boolean {
        let stack = new NewStack()
        let i: number

        for (i = 0; i < input.length; i++) {
            if (this.isLeftBracket(input.charAt(i)))
                stack.push(input.charAt(i))

            if (this.isRightBracket(input.charAt(i))) {
                if (stack.isEmpty())
                    return false

                let top:string = String(stack.pop())

                if (this.bracketsMatch(input.charAt(i), top))
                    return false

            }
        }

        return stack.isEmpty()
    }

    private isLeftBracket(input: string): boolean {
        return this.leftBrackets.includes(input)
    }

    private isRightBracket(input: string) {
        return this.rightBrackets.includes(input)
    }

    private bracketsMatch(left: string, right: string): boolean {
        return this.leftBrackets.indexOf(left) == this.rightBrackets.indexOf(right)
    }

}

let exp = new Expression()

// console.log(exp.isBalenced('( 1 + 2 >'))

