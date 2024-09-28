#include <iostream>
using namespace std;

int main() {
    int size, element, position;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size + 1]; 
    
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position (0-based index) to insert the element: ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    cout << "Array after insertion: ";
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
