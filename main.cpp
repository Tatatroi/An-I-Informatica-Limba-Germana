#include <iostream>
#include<functional>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    function<int(int,int)> sum = [](int a, int b){
        return a + b;
    };

    auto sum2 = [](int a, int b) {
        return a+b;
    };

    cout<<sum(1,2)<< ' ';
    cout<<sum2(2,4);

    vector<int> numere = {4,3,5,2,6,7,9,8,1,10};

    sort(numere.begin(),numere.end(),[](int a, int b){
        return a < b;
    });
    cout<<'\n';
    for(auto num : numere){
        cout<<num<< ' ';
    }
    cout<<'\n';
    int var1 = 100;
    cout<< "var1:"<< var1<<'\n';

    auto increment= [&var1](){
        var1+=100;
    };
    increment();
    cout<< "var1:"<< var1<<'\n';

    int x = 10;

    auto lambdaByValue = [x]() mutable {
        x += 5;
        std::cout << "In lambdaByValue, x = " << x << std::endl;
    };

    auto lambdaByReference = [&x]() {
        x += 5;
        std::cout << "In lambdaByReference, x = " << x << std::endl;
    };

    std::cout << "Inainte de apelare, x = " << x << std::endl;

    lambdaByValue();
    std::cout << "Dupa apelare lambdaByValue, x = " << x << std::endl;

    lambdaByReference();
    std::cout << "Dupa apelare lambdaByReference, x = " << x << std::endl;

    return 0;
}
