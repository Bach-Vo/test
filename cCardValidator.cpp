#include <iostream>
#include <cstring>

using namespace std;


int validator(char array[], int arrSize);
void cardValidMes(int totalNum, string& cValidMes);
void cardTypeMes(int typeNum, string &cTypeMes);
//in parameter string &errMes

int main(){
    int size = 16;
    char arr[] = "4388576018410707";                                  //checks the actual arr size
    /*
    cout << "Enter Card Number: ";
    cin.getline(arr, size, '\n');
    size = strlen(arr);
    */

   //copy cardNum
   string cardHolder = arr;
    int total = 0;
    total = validator(arr[size], size);

    string cValidMes = "";
    string cTypeMes = "";

    cardValidMes(total, cValidMes);
    cardTypeMes(cardHolder[0] - 48, cTypeMes);

    cout << "\n\nCard# "<< cardHolder << cValidMes;
    cout << "\t\t\t\tCard type: " << cTypeMes << endl;
}
int validator(char array[], int arrSize){
    int tempSum =0;
    int sum =0;
    for (int i = arrSize-2; i >= 0; i-=2)
    {
        sum = (array[i] -48) * 2;
        //cout << '\t' << "arr[i]:" << arr[i] << "\t i:" << i << endl;
        //cout << "sum:" << sum << '\n';
        if (sum >= 10)
        {
            tempSum = (sum/ 10) + (sum% 10);
            //cout << "temp:" << tempSum << endl;
            array[i] = tempSum +48;
            //cout << arr[i] << endl;
        }
        else
            array[i] = sum +48;
    }
    int tt = 0;
    for (int k = 0; k < arrSize; k++)
    {
        cout << array[k] << " | ";
        tt += array[k] -48;
    }
return tt;
}

void cardValidMes(int totalNum, string &cValidMes){
    if (totalNum%10 == 0)
        cValidMes = " is Valid!";
    else cValidMes = " is InValid...";  
}

void cardTypeMes(int typeNum, string &cTypeMes){
   switch (typeNum)
   {
   case 4:
       cTypeMes = "Visa";
       break;
   case 5:
       cTypeMes = "MasterCard";
       break;
   case 37:
       cTypeMes = "American Express";
       break;
   case 6:
       cTypeMes = "Discover";
       break;
   default:
       cTypeMes = "Card not recognized...";
   }
}
//sumE
//sumO
// result = sumE + sumO;
/*
'result' is devisible by 10, valid. Otherwise, invalid;
// cardNum: 4388576018402626


/*
Method_1            //doing Me_1 in this program.
-duplicate card num to a temp arr
-doub ele and put new ele after doubling directly into the array
-get total by iterating through the whole arr once

Method_2
-Get odd and even ele of the arr
-Put doubed ele into a temp variable
-Get sumE and sumO, then result
*/