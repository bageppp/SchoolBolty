#include <iostream>

int main () { 

    int h ;
    std :: cout << "visota"<< std:: endl;
    std :: cin >> h;
    // std :: cout << "vidite cheslo "<< std:: endl;
    // std:: cin >> n ;
for (int y = h; y > 0; y-=2) {
	
    for (int a = 1; a <= (h-y)/2; a++){
		std::cout << " ";
    }
			
			
    for (int r = 1; r <= y; r++){
		std::cout << "*";
    }
    std::cout << std::endl;
}
for (int t = 2; t <= h; t+=2) {
	
	for (int a = 1; a <= (h-t)/2; a++){
		std::cout << " ";
    }	
	for (int r = 0; r <= t; r++){
		std::cout << "*";
    }
    std::cout << std::endl;
    
    }
    return 0;
}