#include <iostream>
int main(){
    for(int count=1;count<=100;count++){
        if (count % 15 == 0){
            std::cout<<"FIZZBUZZ\n";
        }else if (count % 3 == 0){
            std::cout<<"fizz\n";
        }else if (count % 5 == 0){
            std::cout<<"buzz\n";
        }else
            std::cout<<count;}}
