#include <iostream>
using namespace std;

int main() {
    // Insertion Sort with C++
    // by ApliCalvin

    int n;
    n = 7;
    int A[n] = {6, 8, 7, 4, 2, 5, 3};

    for (int i = 1; i < n; i++) {
        int key = A[i]; 
        int j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        
        A[j + 1] = key;
    }

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
