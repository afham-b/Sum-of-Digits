#include <iostream>
#include <iomanip>
using namespace std; 

int main() {

int n;
int sum =0; 

cout << "Number: " <<endl;
cin >> n; 

for (int i=1; i<= 10 ; i ++)
{ 
  sum=sum+n%10;
  n= n/10;  
}

cout << sum <<endl; 

return 0; 
} 