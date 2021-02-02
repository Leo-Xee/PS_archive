let BubbleSort = function (arr) {
  let temp;
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length - i; j++) {
      if (arr[j + 1] < arr[j]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return arr;
};

let result = BubbleSort([3, 4, 2, 5, 1, 0, 4, 2, 5, 3, 1]);
console.log(result);
