let a8: number[] = [-1, -1, -1, 10, 25, 60, 80]
let b8: number[] = [5, 20, 70]
let n6: number = a8.length
let m6: number = b8.length

merge(a8, b8, n6, m6)

function merge(a: number[], b: number[], n: number, m: number) {
    let i = m
    let j = 0
    let k = 0

    while (k < (m + n)) {
        if ((i < (m + n) && a[i] <= b[j]) || (j == m)) {
            a[k] = a[i]
            k++
            i++
        } else {
            a[k] = b[j]
            k++
            j++
        }
    }
}

for(let i:number = 0; i<m6+n6; i++)
    console.log(a8[i]);
