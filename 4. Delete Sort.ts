let a4: number[] = [5, 10, 20, 30, 50, 60]
let n4: number = a4.length
let key4: number = 10

n4 = del(a4, n4, key4)
console.log(`n4: ${n4}`);

function bSearch2(a: number[], low: number, high: number, key: number): number {
    let mid2: number

    if (low <= high) {
        mid2 = low + (high - low) / 2

        if (key == a[mid2])
            return mid2

        if (key < a[mid2])
            return bSearch2(a, low, mid2 - 1, key)

        if (key > a[mid2])
            return bSearch2(a, mid2 + 1, high, key)
    }

    return -1
}

function del(a:number[], n:number, key:number):number{

    let p:number = bSearch2(a, 0, n-1, key)

    console.log(`p: ${p}`);

    if(p==-1){
        console.log('Not Found');
        return n
    }

    for(let i: number = p; i<n-2; i++)
        a4[i]=a4[i+1]

    return n-1
}

for (let i: number = 0; i < n4; i++) {
    console.log(a4[i])
}
