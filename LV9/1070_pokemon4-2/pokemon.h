#ifndef POKEMON_H
#define POKEMON_H

struct Pokemon
{
    std::string Name;
    int Lv;
    int Hp;
};
 
void InputData(struct Pokemon &);
void ShowInfo(struct Pokemon);

#endif