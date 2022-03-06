// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int i, j, a, mid;
  a = 0;
  i = 0;
  j = size - 1;
  mid = i + (j - 1) / 2;
  if (true) {
    for (i = 0; i < mid; i++) {
      if (arr[i] == value)
        a++;
    }
    for (j = size; j >= mid; j--) {
      if (arr[j] == value)
        a++;
    }
    return a;
  } else {
    return 0;
  }
}
