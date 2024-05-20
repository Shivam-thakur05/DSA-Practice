#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 2, 5, 6, 3, 7};
    int n = arr.size();
    
    std::cout << "Duplicates in the array are: ";
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                std::cout << arr[i] << " ";
                break;  // Break to avoid printing duplicates multiple times
            }
        }
    }

    std::cout << std::endl;

    return 0;
}