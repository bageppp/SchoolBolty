#include <iostream>   
int main (){ 
    int x1, y1 ,w ,h, x2,y2 ;
    std:: cout << "Top left (x1, y1):" << std :: endl;

    std::cin>>x1 >> y1;
     
     std:: cout << "w, h:"<< w << h << std::endl;
     std :: cin >> w >> h;
     std:: cout << "tochka (x2, y2):" << std :: endl;
     std :: cin >> x2>> y2; 
   
     if (x2>=x1 && x2<=x1+w && y2<=y1 && y2>=y1-h){
         std::cout <<"v prama ugol nik "<< std::endl;
     }else {
         std::cout << "ne v pramougolnik" << std::endl;
     }
    
     return 0;

} 