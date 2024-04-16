#include <iostream>
using namespace std;

int main() {
    // Bubble Sort with C++
    // by ApliCalvin

    int n;
    n = 7;
    int A[n] = {6, 8, 7, 4, 2, 5, 3};

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                // Tukar elemen jika urutan salah
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
