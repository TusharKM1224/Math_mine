/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>

using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
    

void Bitwise_AND(){
    int bit_String1,bit_String2;
    int decimal1,decimal2;
    int AND_res=0;
    cout<<"Enter the First Bit String : ";
    cin>>bit_String1;
    cout<<"\nEnter the Second Bit String : ";
    cin>>bit_String2;
    decimal1=binaryToDecimal(bit_String1);
    decimal2=binaryToDecimal(bit_String2);
    // BITWISE_AND_OPERATION
    AND_res=decimal1&decimal2;
    decToBinary(AND_res);
}

void Bitwise_OR(){
    int bit_String1,bit_String2;
    int decimal1,decimal2;
    int OR_res=0;
    cout<<"Enter the first bit string: ";
    cin>>bit_String1;
    cout<<"\nEnter the Second bit string: ";
    cin>>bit_String1;
    decimal1=binaryToDecimal(bit_String1);
    decimal2=binaryToDecimal(bit_String2);
    // BITWISE_OR_ORPERTION
    OR_res=decimal1|decimal2;
    cout<<OR_res;
    decToBinary(OR_res);
}

void Bitwise_XOR(){
    int bit_String1,bit_String2;
    int decimal1,decimal2;
    int XOR_res=0;
    cout<<"Enter the First bit String :";
    cin>>bit_String1;
    cout<<"\n Enter the Second bit string :";
    cin>>bit_String2;
    decimal1=binaryToDecimal(bit_String1);
    decimal2=binaryToDecimal(bit_String2);
    // BITWISE_XOR_OPERATION
    XOR_res=decimal1^decimal2;
    decToBinary(XOR_res);
}




int main()
{
    int choice=0;
    cout<<" Welcome to Bitwise Operation : ";
    cout<<"\n 1. Bitwise AND \n 2. Bitwise OR \n 3. Bitwise XOR\n";
    cin>>choice;
    switch(choice){
        case 1:
        Bitwise_AND();
        break;
        case 2:
        Bitwise_OR();
        break;
        case 3:
        Bitwise_XOR();
        break;
        
        
    }
    
    //Bitwise_OR();
    

    return 0;
}