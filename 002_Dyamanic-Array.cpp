#include <iostream>
using namespace std;

int main()
{

    int item, length;
    cout << "Enter the length of array: ";
    cin >> length;
    int *arr = new int(length);
    for (item = 0; item < length; item++)
    {
        cout << "Enter " << item + 1 << " item" << endl;
        cin >> arr[item];
    }
    cout << "You entered: ";
    for (item = 0; item < length; item++)
    {
        cout << arr[item] << " ";
    }

    return 0;
}