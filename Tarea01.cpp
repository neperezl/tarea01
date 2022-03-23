#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n = 0;
    int min = 10;
    int max = 100;
    double result = 0;
    for (n = min; n <=max; n = n+1){
        if (n%2 ==1) {
            result = result + 1.0/n;
        }
    }
std::cout << "  "<< result <<"\n";
   return 0;
}  
