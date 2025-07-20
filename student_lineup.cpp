#include <iostream>
#include <fstream>
#include <string>

int main(){
    
    std::string name;
    std::ifstream inputFile;
    int count = 0;
    inputFile.open("LineUp.txt");
    std::string top_name = "";
    std::string bottom_name = "";
    

    while(inputFile >> name){
        count += 1;
        if (top_name == ""){
            top_name = name;
        }
        else if(name < top_name){
            top_name = name;
        }

        if (bottom_name == ""){
            bottom_name = name;
        }
        else if (name > bottom_name){
            bottom_name = name;
        }
    }
    std::cout << "The number of students in the class is: " << count << std::endl;
    std::cout << "The student at the front of the line is: " << top_name << std::endl;
    std::cout << "The student at the back of the line is: " << bottom_name << std::endl;
    

    return 0;
}