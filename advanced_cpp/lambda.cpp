#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>


namespace animal{
    std::string dog = "Kitz";
    std::string cat = "Lilly";
}


int main(){

    auto add = [](int a, int b)->int
    {
        return a+b;
    };

    auto operation = [](int a, int b, std::string op)-> double{
        if(op == "sum"){
            return a+b;
        }else{
            return (a+b)/2.0;
        }
    };
    int num_main = 100;
    
    auto lamda_capture = [=](int num)->void {
        // num_main +=num;
        std::cout<< num_main <<std::endl;
    };

   std::vector<int> nums = {1,2,3,4,5,6,7,8,9,10};

   int even_counts = std::count_if(nums.begin(), nums.end(),[](int num)->bool{
    return num%2 == 0;
   });

   std::vector<int> primes;

//    std::for_each(nums.begin(),nums.end(), [&primes](int n)->void{

//     bool prime = true;
//     for(int i = 2;i<=std::sqrt(n);i++){
//         if(n%i==0){
//             prime = false;
//             break;
//         }
//     }

//     if(prime && n!=1)
//         primes.push_back(n);
//    });

//    for(int i:primes)
//     std::cout<<i<<" ";

std::string password = "me";
std::string userpw;
// std::cout<<"Enter password : \n";

// std::cin>>userpw;

auto checkPasscode = [password,userpw]()->void{
    if(password.compare(userpw)==0){
        std::cout<<"Yep Correct!\n";
    }else{
        std::cout<<"You gotta try again\n";
    }
};

// checkPasscode();
// std::string dog = "Kits";
// std::string cat = "Lily";

// std::cout<<"Main dog : "<< dog << " Interface dog : "<<animal::dog<<std::endl;
// std::cout<<"Interface cat : "<<cat << " Interface cat : "<<animal::cat<<std::endl;

try{
    int num1 = 10, num2 = 0;

    if(num2 == 0){
        throw "Division by zero nehi hai";
    }else{
        std::cout<<"Works!\n";
    }

}catch(const char* e){
    std::cout<<"Error : "<<e<<std::endl;
}


}

