#include <cstdlib>
#include <iostream>
using namespace std;
//@author ion meod
// this is bubble insertion
void InsertionSort(int arr[], int n) {
    int i, second, j, first;
    for (i = 1; i < n; i++) {
        second = arr[i];
        j = i - 1;
        first = arr[j];
        
        while (j >= 0 && arr[j] > second) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = second;
    }
}

int PrintSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
}

int main(int argc, char** argv) {
    cout << "How many entries are on your table?" << endl;
    int n;
    cin>>n;
    int arr[n];
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            cout << "Data Entry " << i + 1 << " : ";
            cin >> arr[i];
        }
        cout << endl;
        InsertionSort(arr, n);
    } else {
        cout << "Enter a positive number of entries" << endl;
    }
    PrintSort(arr, n);
    return 0;
}