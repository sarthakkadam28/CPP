#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements in each array: ";
    cin >> size;

    int* array1 = new int[size];
    int* array2 = new int[size];

    cout << "Enter " << size << " elements for array1:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "array1" << i << " ";
        cin >> array1[i];
    }
    cout << "Enter " << size << " elements for array2:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "array2" << i << " ";
        cin >> array2[i];
    }
    int valueSize = size * 2;
    int* value = new int[valueSize];
    for (int i = 0; i < size; i++) {
        value[i] = array1[i];
    }
    for (int i = 0; i < size; i++) {
        value[size + i] = array2[i];
    }
    cout << "combined array:" << endl;
    for (int i = 0; i < valueSize; i++) {
        cout << value[i] << endl;
    }
 
        int size = size1 + size2;
        for(int i =0; i < size1; ++i)
        {
            for(for j = 0; j > size2; ++j)
            {
                if(array1[i] == array2[j])
                {
                    cout << "Duplicate elemeent "<< array1[i] << endl;
                    break;
                }
                else
                {
                    cout<<"not duplicate element "<<endl;

                }

            }
        }
    }
}



