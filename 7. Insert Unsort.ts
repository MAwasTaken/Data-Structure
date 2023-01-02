let a7:number[] = [6, 9, 2, 5, 17, 25, 12]
let n7:number = a7.length
let key7:number = 13

n7 = insertElem(a7, key7, n7)

function insertElem(a:number[], key:number, n:number): number{
    a[n]=key

    return (n+1)
}

for(let i: number = 0; i<n7; i++)
    console.log(a7[i])
