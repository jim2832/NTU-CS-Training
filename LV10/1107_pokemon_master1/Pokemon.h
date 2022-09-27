#ifndef POKEMON_H
#define POKEMON_H
#include <string>

class Pokemon{
    public:
        std::string Name;
        int Lv;
        int HpMax;
        int HpCur;
        void ShowInfo();

    private:
};

#endif