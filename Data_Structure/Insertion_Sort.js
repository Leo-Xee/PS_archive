let insertionSort = (arr) => {
  let temp;
  for (let i = 0; i < arr.length; i++) {
    let j = i;
    while (arr[j] > arr[j+1]) {
      temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
      j--;
    }
  }
  return arr;
}

let result = insertionSort([1, 3, 6, 9, 10, 4, 7, 8, 2, 5]);
console.log(result);