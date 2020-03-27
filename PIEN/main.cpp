//
//  main.cpp
//  PIEN
//
//  Created by MitsukiGoto on 2020/03/26.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//
// For Life is Tech ! Spring Camp 2020 at Nakanoshima Center of Osaka University

#include <iostream>
#include <valarray>
#include <string>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::valarray<std::valarray<int>> isDisplay = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
        {1,1,1,1,1,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
        {0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
        {0,0,1,1,0,0,0,0,0,1,1,0,1,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,1,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
        {0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1},
        {0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,1},
        {0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,1,1,0},
        {0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,0,0},
    };
    for(auto it = std::begin(isDisplay); it != std::end(isDisplay); it++) {
        std::string pien;
        for(auto ite = std::begin(*it); ite != std::end(*it); ite++) {
            if(*ite == 0) {
                pien += "　";
            } else if(*ite == 1) {
                pien += "🥺";
            }
        }
        std::cout << pien << std::endl;
    }
    std::cout << "\u001b[36m" << std::endl;
    std::cout << " /$$   /$$ /$$$$$$$$ /$$             /$$$$$$$" << std::endl;
    std::cout << "| $$  | $$|__  $$__/| $$            | $$__  $$" << std::endl;
    std::cout << "| $$  | $$   | $$   | $$$$$$$       | $$  \\ $$  /$$$$$$  /$$   /$$" << std::endl;
    std::cout << "| $$$$$$$$   | $$   | $$__  $$      | $$  | $$ |____  $$| $$  | $$" << std::endl;
    std::cout << "|_____  $$   | $$   | $$  \\ $$      | $$  | $$  /$$$$$$$| $$  | $$" << std::endl;
    std::cout << "      | $$   | $$   | $$  | $$      | $$  | $$ /$$__  $$| $$  | $$" << std::endl;
    std::cout << "      | $$   | $$   | $$  | $$      | $$$$$$$/|  $$$$$$$|  $$$$$$$" << std::endl;
    std::cout << "      |__/   |__/   |__/  |__/      |_______/  \\_______/ \\____  $$" << std::endl;
    std::cout << "                                                         /$$  | $$" << std::endl;
    std::cout << "                                                         |  $$$$$$/" << std::endl;
    std::cout << "                                                          \\______/" << std::endl;
    std::cout << "\u001b[0m" << std::endl;
    return 0;
}
