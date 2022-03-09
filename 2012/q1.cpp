#include <iostream>
#include <vector>

using namespace std;

int PrimeFactorize(int num){
    int factor = 0;
    for (int i = 2; i <= 100; i++){
        if ((num % i) == 0){
            factor = i;
            break;
        }
    }
    return factor;
}

int main() {
    int num = 1000;
    vector<int> factors;
    int new_num = num;
    /*
    int factor = PrimeFactorize(new_num);
    cout << factor << "\n";
    new_num = new_num/factor;
    cout << new_num;
    */
    int factor = PrimeFactorize(new_num);
    factors.push_back(factor);
    new_num = new_num/factor;
    cout << new_num << "\n";
    cout << PrimeFactorize(new_num) << "\n";
    new_num = new_num/factor;
    cout << new_num << "\n";
    cout << PrimeFactorize(new_num) << "\n";
    new_num = new_num/factor;
    cout << new_num << "\n";
    cout << PrimeFactorize(new_num) << "\n";
    new_num = new_num/factor;
    cout << new_num << "\n";
    cout << PrimeFactorize(new_num) << "\n";
    new_num = new_num/factor;
    cout << new_num << "\n";
    cout << PrimeFactorize(new_num) << "\n";
    new_num = new_num/factor;
    //cout << factor;
}
