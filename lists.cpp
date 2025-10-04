#include <iostream>

using namespace std;

// Function to show members of the list old school style
void showList(int* l, int n) {
    for(int i = 0; i < n; ++i) {
        cout << l[i] << "  ";
    }
    cout << endl;
}

// Function to show members of a list with new style traversal
template <size_t N>
void showListNew(int (&l)[N]) {

     for(int num : l){
         cout << num << "  ";

     }
     cout << endl;
 }

int max(int* l, int n) {
    int max = 0;
    for(int e = 0; e < n; e++) {
        // Current number is always l[e]
        if (l[e] > max) {
            max = l[e];
        }
    }
    return max;
}

int sum(int* l, int n) {
    int sum = 0;
    for(int d = 0; d < n; d++){
        sum = sum + l[d];
    }
    return sum;
}

void showSummary(int* l, int n) {
    cout << "List: ";
    showList(l, n);
    cout << endl;
    cout << "Max: " << max(l, n) << endl;
    cout << "Sum: " << sum(l, n) << endl;
}

int main() {

    int numbers[] = {10, 20, 30, 40, 50};
    showListNew(numbers);
    return 0;
}