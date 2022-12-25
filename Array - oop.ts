class NewArray {
    constructor(private array: number[] = [10, 20, 30, 40]){ }

    print() {
        let i:number = 0
        for (i = 0; i < this.array.length; i++)
            console.log(this.array[i])
    }

    inser(item: number) {
        this.array[this.array.length++] = item
    }

    removeAt(index: number) {
        let i: number
        if (index < 0 || index >= this.array.length)
        console.log('Illegal Argument Exception')
        for (i = index; i < this.array.length; i++) {
            this.array[i] = this.array[i + 1]
        }
    }
    
    indexOf(item: number){
        let i: number
        for (i = 0; i < this.array.length; i++)
        if (this.array[i] == item)
            return i
        return -1
    }

}

let constructedArray = new NewArray()

// constructedArray.print()
// constructedArray.inser(10)
// constructedArray.removeAt(4)
// console.log(constructedArray.indexOf(20))
// constructedArray.
