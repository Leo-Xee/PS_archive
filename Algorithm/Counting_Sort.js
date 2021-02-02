/*
 **********************
 *   Counting Sort    *
 **********************
 * Best:    n + r     *
 * Average: n + r     *
 * Worst:   n + r     *
 * Memory:  n + r     *
 * stable:  Yes       *
 **********************
 * r: 배열 중 가장 큰 수
 */

function countingSort(array, r) {
  let count = [],
    result = [];
  // r만큼 0으로 초기화
  for (let i = 0; i <= r; i++) {
    count[i] = 0;
  }
  //  개수 누적
  for (let i = 0; i < array.length; i++) {
    count[array[i]]++;
  }
  //  result에 해당 요소를 개수만큼 push
  for (let i = 0; i <= r; i++) {
    if (count[i] != 0) {
      for (let j = 0; j < count[i]; j++) {
        result.push(i);
      }
    }
  }
  return result;
}
