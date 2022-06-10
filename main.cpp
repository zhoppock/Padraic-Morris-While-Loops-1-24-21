//Padraic Morris
// While Loops
// 1/24/21
//Description
// Version 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i = 1;
    int sum=0;
    while(i<=9)
    {cout<<"The value of the variable i is: "<<i<<endl;
    sum = sum+i;
    i++;}
    cout<<"Sum is : "<<sum<<endl;
    cout<<"Counter is : "<<i-1<<endl;
    cout<<"Average is : "<<sum/(i-1)<<endl;




// Padraic Morris
//Do-While Loops
// 1/24/21
// Version 1

    int number = 0;
    sum = 0;
    do{
        cout<<"Enter a Number: ";
        cin>>number;
        sum += number;
    }while(number != 0);
    cout<<"Total Sum = "<<sum << endl;        



//Padraic Morris
//For Loops
// 1/24/21
//Version 1

    int start, end, counter;
    number = 0;
    cout<<"I will display a table of numbers and their squares."<<endl;
    cout<<"Enter the starting number: ";
    cin>>start;
    cout<<"Enter the ending number: ";
    cin>>end;
    counter = end - start;
    cout<<"Number Number Squared"<<endl;
    cout<<"--------------------------"<<endl;
    for(int i=0; i <= counter; i++){
        if(start<10){
        number = start * start;
        cout<<start<<"               "<<number<<endl;
        start++;}
        else{
            number = start * start;
            cout<<start<<"              "<<number<<endl;
            start++;}
        }
}

