/*
 **********************
 *     Quick Sort     *
 **********************
 * Best:    n log(n)  *
 * Average: n log(n)  *
 * Worst:   n^2       *
 * Memory:  log(n)    *
 * stable:  No        *
 **********************
 */
function swap(array, i, j) {
  let temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

// 재귀로 분할 정복
function quicksort(array, left, right) {
  left = left || 0;
  right = right || array.length - 1;

  let pivot = partition(array, left, right);

  if (left < pivot - 1) {
    quicksort(array, left, pivot - 1);
  }

  if (right > pivot) {
    quicksort(array, pivot, right);
  }

  return array;
}

function partition(array, left, right) {
  let pivot = Math.floor((left + right) / 2);

  // 엇갈릴 때까지 반복
  while (left < right) {
    // left값이 pivot값보다 클 때까지
    while (array[left] < array[pivot]) {
      left++;
    }
    // left값이 pivot값보다 작을 때까지
    while (array[right] > array[pivot]) {
      right--;
    }

    // 엇갈리지 않으면 left, right값 swap
    if (left <= right) {
      swap(array, left, right);
      left++;
      right--;
    }
  }
  // 엇갈리면 중간값인 left 반환
  return left;
}

console.log(quicksort([3, 5, 4, 1, 2]));
