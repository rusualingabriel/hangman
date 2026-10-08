#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string words[] {"pizza", "eat", "hangman"};
std::string currentword;
std::string guessword;
int gindex;
int cwords[] {5, 3, 7};

void selectword();
void startgame();
void checkletter(const char litera);

int main(){
    std::cout << "==========================Hangman==========================\n";
    selectword();
    startgame();
    return 0;
}

void selectword(){
    srand(time(NULL));
    gindex = rand() % (sizeof(words) / sizeof(words[0]));
    currentword = words[gindex];
    guessword = "";
    for(int i = 0; i < cwords[gindex]; i++)
        guessword.append("*");
}

void listen(){
    std::cout << "\nGhiceste: ";
    char literai;
    std::cin >> literai;
    std::cout << "\n";
    checkletter(literai);
}

void startgame(){
    std::cout << "Cuvantul tau are " << cwords[gindex] << "!\n" << guessword << std::endl;
    listen();
}

void checkletter(const char litera){
    int pos;
    int anotherpos;
    std::string copie = currentword;
    pos = currentword.find(litera);
    if(pos != -1){
        guessword[pos] = litera;
        do{
            copie[pos] = ' ';
            anotherpos = copie.find(litera);
            if(anotherpos != -1)
                guessword[pos] = litera;
            else
                break;
        }
        while(anotherpos != -1);
        std::cout << guessword;
        listen();}
    else{
        std::cout << "\nLitera respectiva nu se afla in cuvant!" << std::endl;
        listen();}
}

void refresh(){
    std::cout << "refresh";
}
