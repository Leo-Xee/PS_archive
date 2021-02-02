let selectionSort = (arr) => {
  let minIdx, temp;
  for (let i = 0; i < arr.length; i++) {
    minIdx = i;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[minIdx] > arr[j]) {
        minIdx = j;
      }
    }
    // 최솟값이 변경되면 swap
    if (minIdx !== i) {
      temp = arr[minIdx];
      arr[minIdx] = arr[i];
      arr[i] = temp;
    }
  }
  return arr;
};

let result = selectionSort([1, 3, 6, 9, 10, 4, 7, 8, 2, 5]);
console.log(result);
