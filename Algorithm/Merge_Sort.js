/*
 **********************
 *     Quick Sort     *
 **********************
 * Best:    n log(n)  *
 * Average: n log(n)  *
 * Worst:   log(n)    *
 * Memory:  n         *
 * stable:  Yes       *
 **********************
 */

//  분할 정복(재귀)
function mergeSort(array) {
  if (array.length <= 1) return array;

  const mid = Math.floor(array.length / 2);
  const left = array.slice(0, mid);
  const right = array.slice(mid);

  return merge(mergeSort(left), mergeSort(right));
}

// 두 배열을 병합
function merge(left, right) {
  let resultArray = [],
    leftIndex = 0,
    rightIndex = 0;

  while (leftIndex < left.length && rightIndex < right.length) {
    if (left[leftIndex] < right[rightIndex]) {
      resultArray.push(left[leftIndex]);
      leftIndex++;
    } else {
      resultArray.push(right[rightIndex]);
      rightIndex++;
    }
  }
  // 나머지 요소들을 concat
  return resultArray
    .concat(left.slice(leftIndex))
    .concat(right.slice(rightIndex));
}

console.log(mergeSort([4, 1, 5, 3, 2]));
