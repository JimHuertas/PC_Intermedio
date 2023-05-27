#include <iostream>

int main(){
    int len,i,c,s;
    std::string str;
    while(true){
        std::cin>>str;
        len = str.length();
        if(str.at(0)=='0'&&len==1)break;
        c = 0;
        for(i = 0;i<len;i= i+1){
            s =c*10+str.at(i)-48;
            c = s%11;
        }
        if(c == 0)std::cout<<str<<" is a multiple of 11."<<std::endl;
        else std::cout<<str<<" is not a multiple of 11."<<std::endl;
    }
    return 0;
}