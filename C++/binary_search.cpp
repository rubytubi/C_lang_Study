#include <iostream>
#include <vector>

using namespace std;
// 1. 반복문
bool binary_search(vector<int> &arr, int len, int target) {
  int low = 0;
  int high = len - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    // 원하는 값을 찾았다면 TRUE 반환
    if (target == arr[mid])
      return true;

    // 원하는 값이 더 작다면 검사 범위를 더 낮게 잡아야 한다.
    if (target < arr[mid])
      high = mid - 1;

    // 원하는 값이 더 크다면 검사 범위를 더 크게 잡아야 한다.
    else if (target > arr[mid])
      low = mid + 1;
  }
  // 마지막까지 찾지 못하였다면 FALSE 반환
  return false;
}

// 2. 재귀
bool binary_search(vector<int> &arr, int low, int high, int target) {
  if (low > high)
    return false;

  int mid = (low + high) / 2;

  if (arr[mid] == target)
    return true;

  // 찾는 수가 더 작다면, 검사 범위를 더 작게 잡아야 한다.
  if (arr[mid] > target)
    return binary_search(arr, low, mid - 1, target);

  else if (arr[mid] < target)
    return binary_search(arr, mid + 1, high, target);
}

// 3. STL 사용 - binary_search() 함수
// STL 의 binary_search 함수는 3개의 매개변수를 받는다.
//  첫번째는 찾고자 하는 범위의 시작점, 두번째는 찾고자 하는 범위의 끝점.
//  이 둘은 반복자(iterater)로 주어져야 한다.
//  세번째는 찾고자 하는 수(target)이다.

vector<int> nums;

int target = 3;
bool is_found = binary_search(nums.begin(), nums.end(), target);
// target 이 nums에 있다면 TRUE 를, 없다면 FALSE 를 반환.