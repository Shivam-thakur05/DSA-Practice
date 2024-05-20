#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 3) {
        cout << "The array does not have at least three elements." << std::endl;
        return 0;
    }

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

     sort(arr, arr + n,greater<int>());

     int firstLargest = arr[0];
    int secondLargest = arr[1];
    int thirdLargest;

    for (int i = 2; i < n; ++i) {
        if (arr[i] < secondLargest) {
            thirdLargest = arr[i];
            break;
        }
    }

    std::cout << "Result is : " << firstLargest << ", " << secondLargest << ", " << thirdLargest <<endl;

    return 0;
}