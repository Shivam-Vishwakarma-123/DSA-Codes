#include <iostream>
#include <vector>
using namespace std;
// *******Is array Sorted***************
bool checkshorted(vector<int> &arr, int &n, int i)
{
    cout << i << endl;
    if (i == n - 1)
    {
        // Base condition
        return true;
    }
    else if (arr[i + 1] < arr[i])
    {
        return false;
    }
    else
    {
        return checkshorted(arr, n, i + 1);
        // baaki recursion sambhal lega
    }
}

// **********Binary search using recursion *************
int Binarysearch(vector<int> arr, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    // Base condition
    if (s > e)
    {
        // element not found
        return -1;
    }
    else if (key == arr[mid])
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        // left search
        return Binarysearch(arr, s, mid - 1, key);
    }
    else if (arr[mid] < key)
    {
        // Right  search
        return Binarysearch(arr, mid + 1, e, key);
    }
}

// *********************IncludeExcludeSubstring**************
// Very Important question
void printallsubstring(string str, int n, int i, string outputstr, vector<string> &outputstring)
{
    if (i >= n)
    {
        // cout<<outputstr<<endl;
        // To store the value
        outputstring.push_back(outputstr);
        return;
    }
    else
    {
        //  Exclude the character
        printallsubstring(str, n, i + 1, outputstr, outputstring);

        // Include the ith character in a string
        outputstr.push_back(str[i]);
        printallsubstring(str, n, i + 1, outputstr, outputstring);
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    // int n=arr.size();

    // int i=0;
    // if(checkshorted(arr,n,i)){
    //     cout<<checkshorted(arr,n,i);
    //     cout<<"Array is Shorted"<<endl;
    // }
    // else{
    //     cout<<"Array is not Shorted"<<endl;
    // }

    // int s=0;
    // int e=n-1;
    // int key= 4;
    // cout<<Binarysearch(arr,s,e,key);
    string str = "ABC";
    string output = "";
    vector<string> outputstring;
    int i = 0;
    int n = str.size();
    printallsubstring(str, n, i, output, outputstring);
    for (auto val : outputstring)
    {
        cout << val << endl;
    }
    return 0;
}