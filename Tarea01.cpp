#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n = 0;
    double result = 0;
    for (n = 10; n <=100; n = n+1){
        if (n%2 ==1) {
            result = result + 1.0/n;
            //std::cout << n << "  " result <<"\n" ;
        }
    }
std::cout << "  "<< result <<"\n";
   return 0;
}  