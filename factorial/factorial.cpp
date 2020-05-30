#include <iostream>
using namespace std;
//Calcular factorial con recursion
int factorial(int n)
{
   if (n <= 1)
        return 1;
   else 
       return n*factorial(n-1);
}

int main(){
    
   int num;
   cout << "Introduzca un numero";
   cin >> num;
   cout << "Factorial of entered number: " << factorial(num);
    
   return 0;
}