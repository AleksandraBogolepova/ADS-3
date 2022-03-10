// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int i = 0, j = size - 1, a = 0;
  int mid = (i + j) / 2;
  if (size == 0) {
    return 0;
  }
  if (arr[mid] == value) {
    a++;
  } else if (arr[mid] > value) {
    j = mid;
  } else {
    i = mid;
  }
  return a + cbinsearch(arr, mid - i, value) +
    cbinsearch(&(arr[mid + 1]), j - mid, value);
}

