#include <iostream>
#include<iostream>
using namespace std;
enum class diamonds {
    six = 6,
    seven=7,
    eigth=8,
    nine=9,
    ten=10,
    jack=11,
    queen=12,
    king=13,
    ace=14,
};

enum class hearts {
    six = 6,
    seven = 7,
    eigth = 8,
    nine = 9,
    ten = 10,
    jack = 11,
    queen = 12,
    king = 13,
    ace = 14,
};

enum class clubs {
    six = 6,
    seven = 7,
    eigth = 8,
    nine = 9,
    ten = 10,
    jack = 11,
    queen = 12,
    king = 13,
    ace = 14,
};

enum class spades {
    six = 6,
    seven = 7,
    eigth = 8,
    nine = 9,
    ten = 10,
    jack = 11,
    queen = 12,
    king = 13,
    ace = 14,
};

enum class card {
    diamonds,
    hearts,
    clubs,
    spades,
};

class player {
public:
    player(settype()) {}
    diamonds GetNum_d() { return num_d; }
    hearts GetNum_h() { return num_h; }
    clubs GetNum_c() { return num_c; }
    spades GetNum_s() { return num_s; }
    void settype(card num) { this->num = num; }
private:
    diamonds num_d;
    hearts num_h;
    clubs num_c;
    spades num_s;
    card num;
};

int main()
{

}
