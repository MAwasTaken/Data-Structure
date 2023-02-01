let a6:number[] = [1, 3, 4, 6, 8]
let n6:number = a6.length
let key6:number = -7
// let key6:number = 5

n6 = insert(a6, key6, n6)

function insert(a:number[], key:number, n:number):number{
    let i:number

    for(i = n-1; (i>=0 && a[i]>key); i--)
        a[i+1]=a[i]
    
    a[i+1]=key

    return (n+1)
}

for(let i:number = 0; i<n6; i++)
    console.log(a6[i])