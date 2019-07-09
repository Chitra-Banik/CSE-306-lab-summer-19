#include<iostream>
 #include <fstream>
using namespace std;

 void insert(int arr[],int n)
 {

    for(int i=1;i<=n-1;i++)
    {
        int temp=arr[i];
        int j=i-1;

        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];    //moves element forward
            j=j-1;
        }

        arr[j+1]=temp;    //insert element in proper place
    }
 }
int main()
{
    int i;


    ifstream FileInput;// read from file
    FileInput.open("input.txt");
    int n;
    FileInput >> n;
    int *arr=new int[n];
    for(int i=0; i< n; i++)
    {
        FileInput >> arr[i];
    }
    // after completing reading
    FileInput.close();


    //sorting
    //  bubbleSort(arr, n);
    insert(arr,n);

    ofstream FileOutput;

    FileOutput.open("output.txt");

    for(int i=0; i<n; i++)
    {
        FileOutput << arr[i]<< " ";

    }
    FileOutput.close();

    delete[] arr;

    return 0;
}
