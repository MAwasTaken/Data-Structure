let a5: number[] = [10, 50, 30, 40, 20]
let n5: number = a5.length
let key5: number = 30

n5 = deletElem(a5, 5, key5)

function deletElem(a: number[], n: number, key: number) {
    let pos: number = findElem(a, n, key)

    if(pos == -1){
        console.log("Element Not Found")
        return n
    }

    for(let i:number = pos; i<n-1 ; i++)
        a[i] = a[i+1]

    return n-1
}

function findElem(a: number[], n: number, key: number) {
    for (let i: number = 0; i < n; i++)
        if (a[i] == key)
            return i

    return -1
}

for(let i:number = 0; i<n5 ; i++)
    console.log(a5[i]);