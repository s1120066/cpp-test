#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int N = 5;
    int arr[N];
    
    srand(time(NULL));
    
    cout << "origin random number" << endl;
    for (int i=0; i<5; i++){
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int i=0; i<N-1; i++) {
        for (int j=0; j< N-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout << "order sequence number" << endl;
    for (int i=0 ; i <N; i++) {
        cout << arr[i] << " ";    
    }
    return 0;
}