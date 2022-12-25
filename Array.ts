// // ========================= 1 ==============================

// // let numbers: number[] = [1, 2, 3, 4]
// // numbers[0] = 10
// // numbers[1] = 20
// // numbers[2] = 30
// // numbers[3] = 40

// // console.log(numbers.indexOf(20))

// // console.log(numbers.length)
// // console.log(numbers)

// // ========================= 2 ==============================

let i: number
let item: number
let index: number
let MyArray: number[] = [10, 20, 30, 40]

function print() {
    for (i = 0; i < MyArray.length; i++) {
        console.log(MyArray[i])
    }
}
// print()

function insert(item: number) {
    MyArray[MyArray.length++] = item
}
// insert(50)

function removeAt(index: number) {
    if (index < 0 || index >= MyArray.length)
        console.log('Illegal Argument Exception')
    for (i = index; i < MyArray.length; i++) {
        MyArray[i] = MyArray[i + 1]
    }
}
// removeAt(3)

function indexOf(item: number) {
    for (i = 0; i < MyArray.length; i++)
        if (MyArray[i] == item)
            return i
    return -1
}
// console.log(indexOf(20))
