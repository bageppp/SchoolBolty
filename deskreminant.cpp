#include <iostream>
#include <math.h>

int main (){ 
    int a,b,c;
    std:: cout << "v vod peremennih a b c:" << std :: endl;

    std::cin>>a >> b >> c;
    double D=(b*b)-4*a*c;
      
     if (D>0){
        
        double x1=-b+sqrt(D)/2*a;

       double x2=-b-sqrt(D)/2*a;
         std::cout <<"coren 1 " << x1 << std :: endl;
          
         std :: cout<< "coren 2 " <<x2 <<std :: endl;
         
     }else if (D<0){
         std::cout << "cornei net " << std::endl;
        
    }else { double x; 
         x=-b/2*a;
    
         std::cout << "odin coren: "<<  x <<std :: endl;
        
     }
    
     return 0;

} 