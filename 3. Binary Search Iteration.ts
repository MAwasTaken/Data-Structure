let a3: number[] = [6, 8, 9, 12, 16, 18, 19]
let n3: number = a3.length
// let key3: number = 190
let key3: number = 19
let p3: number = iSearch(a3, 0, n3 - 1, key3)

function iSearch(a: number[], low: number, high: number, key: number): number {
    let mid: number

    while (low <= high) {
        mid = low + (high - low) / 2

        if (key == a[mid])
            return mid

        if (key > a[mid])
            low = mid + 1

        else
            high = mid - 1
    }

    return -1
}

if (p3 == -1)
    console.log('Not Found')
else
    console.log(p3);