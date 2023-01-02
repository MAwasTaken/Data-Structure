let a9: number[] = [5, 6, 7, 8, 9, 1, 2, 3, 4]
let n9: number = a9.length
let key9: number = 2

console.log(search(a9, n9, key9))

function search(a: number[], n: number, key: number) {
    let pivot: number = f(a, 0, n - 1)
    console.log(`pivot: ${pivot}`);
    console.log(`n: ${n}`);
    if (pivot == -1)
        return binarySearch(a, 0, n - 1, key)

    if (a[pivot] == key)
        return pivot

    if (a[0] <= key)
        return binarySearch(a, 0, pivot - 1, key)

    return binarySearch(a, pivot + 1, n - 1, key)
}

function f(a: number[], low: number, high: number): number {
    if (high < low)
        return -1

    if (high == low)
        return low

    let mid = (low + high) / 2

    if (mid < high && a[mid] > a[mid + 1])
        return mid

    if (mid > low && a[mid] < a[mid - 1])
        return (mid - 1)

    if (a[low] >= a[mid])
        return f(a, low, mid - 1)

    return f(a, mid + 1, high)
}

function binarySearch(a: number[], low: number, high: number, key: number):number {
    if (high < low)
        return -1

    let mid: number = (low + high) / 2

    if (key == a[mid])
        return mid

    if (key > a[mid])
        return binarySearch(a, (mid + 1), high, key)

    return binarySearch(a, low, (mid - 1), key)
}