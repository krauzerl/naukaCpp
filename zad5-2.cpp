#include <iostream>

using namespace std;


int main()
{
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};
    int i;
    int najwiekszyElement=arr[0];
    int indexElementu=0;

    cout << "Tablica" << endl;
    for (i = 0; i < n; i = i + 1)
    {

        cout << arr[i] << " ";
        if(arr[i]>najwiekszyElement){
            najwiekszyElement=arr[i];
            indexElementu=i;
        }
    }
    cout<<endl;
    cout<<"Najwiekszy element tablicy to "<< najwiekszyElement<<" z indeksem: "<<indexElementu<<endl;

    }