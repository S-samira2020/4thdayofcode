#include <iostream>

using namespace std;
int myself(int arr[], int sz)
{
    if(sz == 1)
    {
        return arr[0];
    }
    else
    {
        int myvalue = arr[sz-1];
        int colvalue = myself(arr, sz-1);
        if(myvalue > colvalue)
        {
            return myvalue;
        }
        else
        {
            return colvalue;
        }
    }
}

int myself(int arr[], int sz)
{
    if(sz == 1)
    {
        return arr[0];
    }
    else
    {
        int myvalue = arr[sz-1];
        int colvalue = myself(arr, sz-1);
        if(myvalue < colvalue)
        {
            return myvalue;
        }
        else
        {
            return colvalue;
        }
    }
}

int main()
{
     int arr[] = {100, 50, 1000, -50, 150, 2000};
     int result = myself(arr, 6);
     cout << "the maximum value is : " << result << endl;
     cout << "The minimum value is : " << result << endl;

    return 0;
}
