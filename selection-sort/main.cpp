#include <iostream>
using namespace std;

int main() {
    // Selection Sort with C++
    // by ApliCalvin

    int n;
    n = 7;
    int A[n] = {6, 8, 7, 4, 2, 5, 3};

    for (int i = 0; i < n - 1; i++) {
        int min_index = i; 
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min_index]) {
                min_index = j; 
            }
        }
        if (min_index != i) {
            int temp = A[i];
            A[i] = A[min_index];
            A[min_index] = temp;
        }
    }

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
