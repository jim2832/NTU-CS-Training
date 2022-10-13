#ifndef POKEMON_H

class Pokemon{
    public:
        Pokemon();
        Pokemon(std::string na, int lv, int hp);
        ~Pokemon();
        void addItem(std::string item);
        void ShowInfo();
        void Attack(Pokemon &tg);
        void Defence(int atkp);
        void Cure();

    private:
        void setData(std::string na, int lv, int hp);
        std::string Name;
        int Lv;
        int HpMax;
        int HpCur;
        std::string *items;
        int itemNum;
};

#endif