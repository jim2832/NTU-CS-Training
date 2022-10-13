#ifndef POKEMON_H

class Pokemon{
    public:
        Pokemon();
        Pokemon(std::string name, int lv, int hp);
        ~Pokemon();
        void ShowInfo();
        void Attack(Pokemon &Target);
        void Defence(int n);
        void Cure();
        void setData(std::string name, int lv, int hp);

    private:
        std::string Name;
        int Lv;
        int HpMax;
        int HpCur;
};

#endif