function swap(array, i, j) {
  let temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

function quicksortHoare(array, left, right) {
  left = left || 0;
  right = right || array.length - 1;

  let pivot = partitionHoare(array, left, right);

  if (left < pivot - 1) {
      quicksortHoare(array, left, pivot - 1);
  }

  if (right > pivot) {
      quicksortHoare(array, pivot, right)
  }

  return array;

}

function partitionHoare(array, left, right) {
  let pivot = Math.floor((left + right) / 2);

  while (left < right) {
      while (array[left] < array[pivot]) {
          left++
      }
      while (array[right] > array[pivot]) {
          right--
      }

      if (left <= right) {
          swap(array, left, right);
          left++
          right--
      }
  }
  return left;
}

console.log(quicksortHoare([3,5,4,1,2]));