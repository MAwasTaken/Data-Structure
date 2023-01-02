let a2: number[] = [6, 8, 9, 12, 16, 18, 19]
let n2: number = a2.length
// let key2: number = 80
let key2: number = 8
let p2: number = bSearch(a2, 0, n2 - 1, key2)

function bSearch(a: number[], low: number, high: number, key: number): number {
    let mid: number

    if (low <= high) {
        mid = low + (high - low) / 2

        if (key == a[mid])
            return mid

        if (key < a[mid])
            return bSearch(a, low, mid - 1, key)

        if (key > a[mid])
            return bSearch(a, mid + 1, high, key)
    }

    return -1
}

if (p2 == -1)
    console.log('Not Found')
else
    console.log(p2);

