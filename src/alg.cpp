// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  // если ничего не найдено
    int left = 0, right = size - 1, a = 0;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == value) {
            left = mid;
            while (arr[left] == value) {
                left--;
            }
            while (arr[right] != value) {
                right--;
            }
            while (left < right) {
                a++;
                left++;
            }
        } else if (arr[mid] > value) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return a;
}

