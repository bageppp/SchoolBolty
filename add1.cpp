#include <iostream>
 int main (){ 
     int a,b,c;
     

     std::cin>>a >>b >>c;
     std:: cout << "a= " << a << "b= "<< b << "c= " << c << std::endl;
   
     if (c<a){
         std::cout <<"perd bukvoi A "<< std::endl;
     }else if (c>b){
         std::cout << "posle bukva B" << std::endl;
    } else{
        std :: cout << "mejdu "<< std::endl;
    }
     return 0;

 } 