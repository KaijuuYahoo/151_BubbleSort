#include <iostream>
using namespace std;

int arr[15];
int n; //input jumlah data

void inputData(){
    while(true)
    {
        cout << "Masukkan Jumlah Data : ";
        cin >> n;

        if (n < 15){
            break;
        }
        else{
           cout << " Jumlah Data Maksimal 15 " << endl;
        }

    }
    cout << " ======================= " <<endl ;
    cout << " =====Masukkan Data===== " << endl;
    cout << " ======================= ";
    cout << endl ;

    for (int i =0; i < n ; i++){
        cout << " Masukkan Data ke-" << i + 1 << " : ";
        cin >> arr[i] ;
    }
}

void BubbleSort (){
    int pass = 1;//Step 1
    do
    {
        for (int j = 0; j <= n - 1 - pass; j++)//Step 2
        {
            if (arr[j] > arr[j+1]) //Step 3
            {
                int temp;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        } 
        pass = pass + 1; //Step 4
    } while (pass <= n-1); //Step 5
 
}
void DisplayData(){
    cout << "======================" << endl;
    cout << "Data Setelah Diurutkan" << endl;
    cout << "======================" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke - " << i + 1 << " = " << arr[i] << endl;
    }
    
}
 int main (){
    inputData();
    BubbleSort();
    DisplayData();
    return 0 ;
 }