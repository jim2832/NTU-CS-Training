#ifndef POKEMON_H

class Pokemon{
    public:
        //attribute
        std::string Name;
        int Lv;
        int HpMax;
        int HpCur;

        //method
        void ShowInfo();
        void Attack(Pokemon &Target);
        void Defence(int atkp);
        void Cure();
};

#endif