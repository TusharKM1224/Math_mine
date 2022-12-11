/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int val;
    cout<<" Enter the Element : ";
    cin>>val;
    for(int i=0;i<val;i++){
        for(int j=0;j<val;j++){
            cout<<"("<<i<<","<<j<<") ,";
        }
        cout<<"\n";
    }

    return 0;
}