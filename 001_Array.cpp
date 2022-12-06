#include <iostream>
using namespace std;
int arr[6];

void printArray(int arr[6])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

void takingInput()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i << " Element" << endl;
        cin >> arr[i];
    }
}

void replace()
{
    int index, newElement;
    cout << "Enter Index to replace" << endl;
    cin >> index;
    cout << "Enter Element" << endl;
    cin >> newElement;
    arr[index] = newElement;
}

int main()
{
    takingInput();
    replace();
    printArray(arr);
    return 0;
}