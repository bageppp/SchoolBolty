#include <iostream>

int main () { 

    int h ;
    std :: cout << "visota"<< std:: endl;
    std :: cin >> h;
    // std :: cout << "vidite cheslo "<< std:: endl;
    // std:: cin >> n ;
   for (int y = h; y > 0; y--) {
		
		for (int r = 1; r <= y; r++){
			std::cout << "*"; 
        }
        std::cout << std::endl;
	}
    for (int t = 2; t <= h; t++) {
		for (int r = 1; r <= t; r++) {
			std::cout << "*";
        }
        std::cout << std:: endl;
    }
    return 0;
}