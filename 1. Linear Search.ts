let a1: number[] = [17, 8, 13, 20, 6, 14]
let n: number = a1.length
let key1: number = 80
// let key1: number = 8
let p1: number = find(a1, n, key1)

if (p1 == -1)
    console.log('Not Found')
else
    console.log(p1);

function find(a: number[], n: number, key: number) {
    for (let i: number = 0; i <= n - 1; i++)
        if (key == a1[i])
            return i
    return -1
}
