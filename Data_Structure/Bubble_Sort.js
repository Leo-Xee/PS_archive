let bubbleSort = function(arr) {
  let temp, i, j;
  for (i = 0; i < arr.length; i++) {
    for (j = 0; j < arr.length-1; j++) {
        if (arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
  }
  return arr;
}

let result = bubbleSort([3, 5, 2, 1, 4]);
console.log(result);