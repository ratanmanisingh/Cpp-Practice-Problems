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
    void search(int key){
        int low=0,high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==key){
                cout<<"Element found at index "<<mid<<("(after sorting)");
                return;
            }
            else if(arr[mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            cout<<"Element not found in the array.";
        }
    }

};

int main()
{
    bubblesort b;
    b.getdata();
    b.sortdata();
    b.displaydata();
    b.search(5);
}