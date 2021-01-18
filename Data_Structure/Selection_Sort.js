let SelectionSort = function(arr) {
  let minIdx, temp, i , j;
  for (i = 0; i < arr.length; i++) {
    minIdx = i;
    for (j = i; j < arr.length; j++) {
      if (arr[minIdx] > arr[j]) {
        minIdx = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[minIdx];
    arr[minIdx] = temp;
  }
  return arr;
}
let result = SelectionSort([5, 2, 3, 1, 4]);
console.log(result);