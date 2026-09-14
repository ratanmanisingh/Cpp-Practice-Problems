#include <iostream>
using namespace std;

class bubblesort
{
public:
    int n;
    int arr[50];

public:
    void getdata()
    {
        cout << "Enter number of elmemnts: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter element " << (i + 1) << ": ";
            cin >> arr[i];
        }
    }
    void sortdata()
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int hold = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = hold;
                }
            }
        }
    }
    void displaydata()
    {
        cout << "Sorted Array: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    bubblesort b;
    b.getdata();
    b.sortdata();
    b.displaydata();
}