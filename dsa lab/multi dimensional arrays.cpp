//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12}
//    };
//    
//    // accessing elements of the array
//    cout << "Element at arr[0][0]: " << arr[0][0] << endl;
//    cout << "Element at arr[1][2]: " << arr[1][2] << endl;
//    cout << "Element at arr[2][3]: " << arr[2][3] << endl;
//    
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {
    int arr[3][4];
    
    // initializing elements of the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = i * j;
        }
    }
    
    // accessing elements of the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

