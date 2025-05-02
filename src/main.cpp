/* Amerike university
     Author: Julio López
     Date: 02/05/25
     Practice #: 29
     Description: This program shall check if the number put in by the user is prime*/

     #include <iostream>
     using namespace std;

     void Change (string &A, string &B)
     {
        string Temporary =A;
        A = B;
        B = Temporary;
     };

     int main(){

        string a = "Hi ";
        string b = "Bye ";

        cout << a << b;

        Change(a, b);

        cout << a << b;

        return 0;


     }