#include <iostream>
using namespace std;
void selectionsort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[i]) {
        swap(arr[j], arr[i]);
      }
    }
  }
}
void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << ' ';
  }
}
int main() {
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  selectionsort(arr, size);
  display(arr, size);
  return 0;
}
