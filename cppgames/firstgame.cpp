#include <iostream>
using namespace std;
int main(){
    unsigned int score = 5000;
    cout << "score: " << score << endl;
    for(int i = 0; i< 2; ++i){
        score += 100;
        cout << "score: " << score << endl;
    }
    int lives = 3;
    cout << "lives: " << ++lives << endl;
    cout << "lives: " << lives << endl;
    int lb = ++lives *10;
    int lb2 = lives * 10;
    cout << "lives, bonus: " << 4 << "," << " " << lb << endl;
    cout << "lives, bonus: " << 4 << "," << " " << lb2 << endl;
    cout << endl;
    unsigned int bul = 4294967295;
    cout <<"score: "  << bul << endl;
    cout << "score: " <<  ++bul << endl;
    // ++bul;   
    // cout << "score: " << "4294967295" << endl; 
    // cout << "score: " << "0";
}
