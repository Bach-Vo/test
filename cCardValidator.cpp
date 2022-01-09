#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int size = 16;
    char arr[] = "4388576018410707";                                  //checks real list size
    /*
    cout << "Enter Card Number: ";
    cin.getline(arr, size, '\n');
    size = strlen(arr);
    */
   int tempSum =0;
   int sum =0;
    for (int i = size-2; i >= 0; i-=2)
    {
        sum = (arr[i] -48) * 2;
        //cout << '\t' << "arr[i]:" << arr[i] << "\t i:" << i << endl;
        //cout << "sum:" << sum << '\n';
        if (sum >= 10)
        {
            tempSum = (sum/ 10) + (sum% 10);
            cout << "temp:" << tempSum << endl;
            arr[i] = tempSum +48;
            cout << arr[i] << endl;
        }
        else
            arr[i] = sum +48;
    }
    int total = 0;
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << ", ";
        total += arr[k] -48;
    }
    cout << "\ntotal:" << total << endl;
    if (total%10 == 0)
    {
        cout << "Card is Valid!";
    }
    else cout << "Card is InValid...";
    
}
//sumE
//sumO
// result = sumE + sumO;
/*
'result' is devisible by 10, valid. Otherwise, invalid;
// cardNum: 4388576018402626


/*
Method_1 
-duplicate card num to a temp arr
-doub ele and put new ele after doubling directly into the array
-get total by iterating through the whole arr once

Method_2
-Get odd and even ele of the arr
-Put doubed ele into a temp variable
-Get sumE and sumO, then result
*/