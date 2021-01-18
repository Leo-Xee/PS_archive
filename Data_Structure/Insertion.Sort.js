let InsertionSort = function(arr) {
  let i, temp;
  for (i = 0; i < arr.length; i++) {
    let j = i;
    while (arr[j] > arr[j+1]) {
      temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp
      j--;
    }
  }
  return arr;
}

let result = InsertionSort([4, 3, 1, 2, 5]);
console.log(result);