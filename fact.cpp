#include <bits/stdc++.h> 
using namespace std; 
  

#define MAX 1000
   
string factorial(long long n) { 
    if (n > MAX) { 
        cout << "erro de input" << endl; 
        return ""; 
    } 
  
    long long counter; 
    long double sum = 0; 
  
    if (n == 0) 
        return "1"; 
  
    for (counter = 1; counter <= n; counter++) { 
        sum = sum + log(counter); 
    } 
  
    string result 
        = to_string(round(exp(sum))); 
  
    return result; 
} 
  
// Driver code 
int main() 
{ 
    clock_t tStart = clock(); 
    string str; 
    int input;
    cout << "entre com o valor:" << endl;
    cin >> input;
    str = factorial(input); 
    cout << "The factorial is: " << str << endl << endl; 
  
    cout << "Time taken: " << setprecision(10) << ((double)(clock() - tStart) / CLOCKS_PER_SEC) << " s" << endl; 
} 