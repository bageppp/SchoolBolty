#include <iostream>
 int main (){ 
     int x;
     std::cout<<"plese enter number:" << std::endl;
     std::cin>>x;

     if (x>0){
         std::cout <<"greater "<< std::endl;
     }else if (x<0){
         std::cout << "less " << std::endl;
    } else{
        std :: cout << "Equal "<< std::endl;
    }
     return 0;

 }