#include <iostream>
#include <vector>

int main() {
    while(true){
        int num1, num2;
        std::cin >> num1 >> num2;

        if(num1==0 && num2==0) break;

        std::cout << num1+num2 << std::endl;
    }

    return 0;
}






