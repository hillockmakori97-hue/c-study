#include <iostream>
int main(){
    int letter;
    switch (letter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        std::cout << "Vowel\n";
        break;
    default:
        std::cout << "Consonant\n";
        break;
}
}
