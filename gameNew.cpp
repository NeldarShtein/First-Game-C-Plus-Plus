#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int Life_quantity = 1;
int Strength = 0;
int Vitality = 0;
int Speed = 0;
int CHARACTER_MAX_HP = 0;
int HP = 0;
int Damage = 0; 
int Krit_hit = 0;
int Choose = 1;
int Char_Level = 0;
int MAX_XP = 0;
int XP = 0;
int possibl_to_cont = 0;
int LE = 0;
int SE = 0;
int VE = 0;
int SpE = 0;
int MHE = 0;
int HE = 0;
int DE = 0;
int WChoose = 9;
int getXP = 0;
int This_is_Boss = 0;

int Same_Level_Enemy_Spawn_Chance = 3;
int Krit_chance = 6;
int Boss_Spawn_Chance = 5;

class character{
public:
    int Level;
    int Strength;
    int Vitality;
    int Speed;
    int MAX_HP;
    int HP;
    int Damage;
    int Krit_hit;
    int MAX_XP;
    int XP;
};
int Create_Character () {
    character first;
    first.Level = 1;
    first.Strength = (rand() % first.Level) + (rand() % 2) + 1;
    first.Vitality = (rand() % first.Level) + (rand() % 2) + 1;
    first.Speed = (rand() % first.Level) + (rand() % 2) + 1;
    first.MAX_HP = first.Vitality * 10 + ((rand() % 4) * first.Level);
    first.HP = first.MAX_HP;
    first.Damage = (first.Strength * 3) + ((rand() % 2) * first.Level);
    first.Krit_hit = 2 * first.Damage;
    first.MAX_XP = 10;
    first.XP = 0;

    MAX_XP = first.MAX_XP;
    XP = first.XP;
    Krit_hit = first.Krit_hit;
    Char_Level = first.Level;
    Strength = first.Strength;
    Vitality = first.Vitality;
    Speed = first.Speed;
    CHARACTER_MAX_HP = first.MAX_HP;
    HP = first.HP;
    Damage = first.Damage;
}
int Level_Up_Character() {
    character first;
    first.Level = Char_Level + 1;
    first.Strength = Strength + (rand() % 2) + 1;
    first.Vitality = Vitality + (rand() % 2) + 1;
    first.Speed = Speed + (rand() % 2) + 1;
    first.MAX_HP = CHARACTER_MAX_HP + (Vitality * 10 - CHARACTER_MAX_HP) +  ((rand() % 3) * first.Level);
    first.HP = first.MAX_HP;
    first.Damage = (first.Strength * 3) + ((rand() % 2) * first.Level);
    first.Krit_hit = 2 * first.Damage;
    first.XP = XP - MAX_XP;
    if (first.XP <= 0)
    {
        first.XP = 0;
    }
    first.MAX_XP = MAX_XP * 2;
    
    if (first.MAX_XP >= 214748365)
    {
        first.MAX_XP = 214748365;
    }
    if (first.XP >= 214748365)
    {
        first.XP = 214748365;
    }
    if (first.Krit_hit >= 214748365)
    {
        first.Krit_hit = 214748365;
    }
    if (first.Damage >= 214748365)
    {
        first.Damage = 214748365;
    }
    if (first.HP >= 214748365)
    {
        first.HP = 214748365;
    }
    if (first.MAX_HP >= 214748365)
    {
        first.MAX_HP = 214748365;
    }
    if (first.Speed >= 214748365)
    {
        first.Speed = 214748365;
    }
    if (first.Vitality >= 214748365)
    {
        first.Vitality = 214748365;
    }
    if (first.Strength >= 214748365)
    {
        first.Strength = 214748365;
    }
    if (first.Level >= 214748365)
    {
        first.Level = 214748365;
    }

    XP = first.XP;
    MAX_XP = first.MAX_XP;
    Krit_hit = first.Krit_hit;
    Char_Level = first.Level;
    Strength = first.Strength;
    Vitality = first.Vitality;
    Speed = first.Speed;
    CHARACTER_MAX_HP = first.MAX_HP;
    HP = first.HP;
    Damage = first.Damage;
}
class enemy{
public:
    int Level_E;
    int Strength_E;
    int Vitality_E;
    int Speed_E;
    int MAX_HP_E;
    int HP_E;
    int Damage_E;
    int getXP;
};
int Create_Boss () {
    enemy Boss;

    This_is_Boss = 1;
    Boss.Level_E = Char_Level + (rand() % 2);
    Boss.Strength_E = (rand() % Boss.Level_E) + (rand() % 2) + 2;
    Boss.Vitality_E = (rand() % Boss.Level_E) + (rand() % 2) + 2;
    Boss.Speed_E = (rand() % Boss.Level_E) + (rand() % 2) + 2;
    Boss.MAX_HP_E = Boss.Vitality_E * 20 + ((rand()%4) * Boss.Level_E);
    Boss.HP_E = Boss.MAX_HP_E;
    Boss.Damage_E = (Boss.Strength_E * 4) + ((rand()%2) * Boss.Level_E);
    Boss.getXP = Boss.Level_E * 21;
    
    if (Boss.Strength_E >= 214748365)
    {
        Boss.Strength_E = 214748365;
    }
    if (Boss.Vitality_E >= 214748365)
    {
        Boss.Vitality_E = 214748365;
    }
    if (Boss.Speed_E >= 214748365)
    {
        Boss.Speed_E = 214748365;
    }
    if (Boss.Level_E >= 214748365)
    {
        Boss.Level_E = 214748365;
    }
    if (Boss.MAX_HP_E >= 214748365)
    {
        Boss.MAX_HP_E = 214748365;
    }
    if (Boss.HP_E >= 214748365)
    {
        Boss.HP_E = 214748365;
    }
    if (Boss.Damage_E >= 214748365)
    {
        Boss.Damage_E = 214748365;
    }
    if (Boss.getXP >= 214748365)
    {
        Boss.getXP = 214748365;
    }
    
    /*cout << "Level_E = " << Boss.Level_E << endl;
    cout << "Strength_E = " << Boss.Strength_E << endl;
    cout << "Vitality_E = " << Boss.Vitality_E << endl;
    cout << "Speed_E = " << Boss.Speed_E << endl;
    cout << "Damage_E = " << Boss.Damage_E << endl;*/

    getXP = Boss.getXP;
    LE = Boss.Level_E;
    SE = Boss.Strength_E;
    VE = Boss.Vitality_E;
    SpE = Boss.Speed_E;
    MHE = Boss.MAX_HP_E;
    HE = Boss.HP_E;
    DE = Boss.Damage_E;
}
int Create_Enemy () {
    int Will_boss_be = (rand() % Boss_Spawn_Chance);
    if (Will_boss_be == (Boss_Spawn_Chance - 1))
    {
        Create_Boss();
    }
    else if (Will_boss_be != (Boss_Spawn_Chance - 1))
    {
        enemy first;
        This_is_Boss = 0;
        int rand_same_les = (rand() % Same_Level_Enemy_Spawn_Chance);
        if (rand_same_les == 0)
        {
            first.Level_E = Char_Level;
        }
        else if (rand_same_les != 0)
        {
            first.Level_E = (rand() % Char_Level) + 1;
        }
        first.Strength_E = (rand() % first.Level_E) + (rand() % 2) + 1;
        first.Vitality_E = (rand() % first.Level_E) + (rand() % 2) + 1;
        first.Speed_E = (rand() % first.Level_E) + (rand() % 2) + 1;
        first.MAX_HP_E = first.Vitality_E * 10 + ((rand()%4) * first.Level_E);
        first.HP_E = first.MAX_HP_E;
        first.Damage_E = (first.Strength_E * 4) + ((rand()%2) * first.Level_E);
        first.getXP = first.Level_E * 3;
        
        if (first.Strength_E >= 214748365)
        {
            first.Strength_E = 214748365;
        }
        if (first.Vitality_E >= 214748365)
        {
            first.Vitality_E = 214748365;
        }
        if (first.Speed_E >= 214748365)
        {
            first.Speed_E = 214748365;
        }
        if (first.Level_E >= 214748365)
        {
            first.Level_E = 214748365;
        }
        if (first.MAX_HP_E >= 214748365)
        {
            first.MAX_HP_E = 214748365;
        }
        if (first.HP_E >= 214748365)
        {
            first.HP_E = 214748365;
        }
        if (first.Damage_E >= 214748365)
        {
            first.Damage_E = 214748365;
        }
        if (first.getXP >= 214748365)
        {
            first.getXP = 214748365;
        }
    
        /*cout << "Level_E = " << first.Level_E << endl;
        cout << "Strength_E = " << first.Strength_E << endl;
        cout << "Vitality_E = " << first.Vitality_E << endl;
        cout << "Speed_E = " << first.Speed_E << endl;
        cout << "Damage_E = " << first.Damage_E << endl;*/

        getXP = first.getXP;
        LE = first.Level_E;
        SE = first.Strength_E;
        VE = first.Vitality_E;
        SpE = first.Speed_E;
        MHE = first.MAX_HP_E;
        HE = first.HP_E;
        DE = first.Damage_E;
        }
}
int Attack (){   
    if (Speed >= SpE)
    {
        int randomKrit = (rand() % Krit_chance);
        if (randomKrit == 0)
            {
                HE = HE - Krit_hit;
            }
        else if (randomKrit != 0)
            {
                HE = HE - Damage;
            }           
        if (HE <= 0)
            {
                cout << "You win. you get " << getXP << " XP points." << endl << endl;
                XP = XP + getXP;
                Create_Enemy ();
            }
        else if (HE > 0)
            {
                HP = HP - DE;
            if (HP <= 0) {
                    cout << "You died!" << endl << endl;
                    XP = XP - getXP;
                    if (XP < 0)
                    {
                        XP = 0;
                    }
                    }
            }
    }
    
    else if (SpE > Speed)
    {
        HP = HP - DE;
        if (HP <= 0) {
            cout << "You died!" << endl << endl;
            XP = XP - getXP;
            if (XP <= 0)
            {
                XP = 0;
            }
            
            }
        else if (HP > 0)
        {
            int randomKrit = (rand() % Krit_chance);
            if (randomKrit == 0)
            {
                HE = HE - Krit_hit;
            }
            else if (randomKrit != 0)
            {
                HE = HE - Damage;
            }
                
            if (HE <= 0)
            {
                cout << "You win. you get " << getXP << " XP points." << endl << endl;
                XP = XP + getXP;
                Create_Enemy ();
                }
            }   
    }
    
    while (XP >= MAX_XP)
    {
        cout << "You have increased your level!" << endl;
        Level_Up_Character();
    }
}
int Resore_HP(){
    
    if (HP == CHARACTER_MAX_HP)
    {
        cout << "Next fight" << endl << endl;
    }
    else if (HP <= 0)
    {
        cout << endl;
    }
    else if (HP != CHARACTER_MAX_HP)
    {
        cout << "Your HP is " << HP << "/" << CHARACTER_MAX_HP << endl << endl;
        cout << "Restore health" << endl << "1 Restore" << endl << "2 Continue" << endl;
    
        cin >> Choose;
        cout << "_______________________________" << endl;
        if (Choose ==1){
            HP = CHARACTER_MAX_HP;
            XP = XP - (Char_Level * 2);
            if (XP <= 0)
            {
                XP = 0;
            }
        }
        else if (Choose ==2)
        {
            cout << "Next fight" << endl << endl;
        }
        else if (Choose != 1) {
            if (Choose != 2) {
                cout << "Something wrong, try again" << endl; 
                Resore_HP(); } }
    }
}
int Fight(){
    if (HP <= 0)
    {
        if (Life_quantity == 0)
        {
            while (true) {
            cout << "MENU" << endl;
            cout << "1 Start New Game" << endl;;
            cout << "2 EXIT" << endl;
            
            cin >> Choose;
            cout << "_______________________________" << endl;
                
            if (Choose ==1){
                WChoose = 9;
                Create_Character();
                Create_Enemy();
                while (WChoose != 0){
                    
                    cout << "DIFFICULTY" << endl;
                    cout << "1 Normal" << endl;;
                    cout << "2 Hardcore" << endl;;

                    cin >> Choose;
                    cout << "_______________________________" << endl;
                    
                    if (Choose ==1){
                        Life_quantity = 1;
                        WChoose = 0; }
                    else if (Choose ==2){
                        Life_quantity = 0;
                        WChoose = 0; }
                    else if (Choose == 158324769)
                    {
                        return false;
                    }
                    
                    else if (Choose != 1) {
                        if (Choose != 2) {
                            cout << "Something wrong, try again" << endl; } } 
                    }
            
                Fight(); 
                return false;}
            
            else if (Choose ==2){
                return false;}

            else if (Choose != 1) {
                if (Choose != 2) {
                        cout << "Something wrong, try again" << endl;

                        } } }
        }
        
        if (Life_quantity == 1)
        {
            HP = CHARACTER_MAX_HP;
            XP = XP - (Char_Level * 5);
            if (XP <= 0)
            {
                XP = 0;
            }
        }
        
    }

    if (This_is_Boss == 1)
    {
        cout << "THIS IS BOSS!!!" << endl << endl;
    }
    
    else if (This_is_Boss == 0)
    {
        cout << "Common enemy " << endl << endl;
    }

    cout << "Your level " << Char_Level << endl;
    cout << "HP " << HP << "/" << CHARACTER_MAX_HP << endl;
    cout << "XP " << XP << "/" << MAX_XP << endl << endl;
    cout << "Enemy level " << LE << endl;
    cout << "Enemy HP " << HE << "/" << MHE << endl << endl;
    cout << "Fight" << endl << "1 Attack" << endl << "2 Escape" << endl << "3 Your Character info" << endl << "4 Menu" << endl;
 
    cin >> Choose;
    cout << "_______________________________" << endl;

    if (Choose == 158324769)
    {
        return false;
    }
    if (Choose ==1){
        Attack();
        Resore_HP();
        Fight();
    }
    else if (Choose ==2){
        Create_Enemy();
        HP = HP - (Char_Level * 2);
        if (HP <= 0) {
            cout << "You died!" << endl << endl;
            XP = XP - (Char_Level * 12);
            if (XP < 0)
            {
                XP = 0;
            }
        }
        Fight();
    }
    else if (Choose ==3){
        cout << "Strength = " << Strength << endl;
        cout << "Vitality = " << Vitality << endl;
        cout << "Speed = " << Speed << endl;
        cout << "Krit_hit = " << Krit_hit << endl;
        cout << "Damage = " << Damage << endl;
        Fight();
    }
    else if (Choose ==4){
        while (true)
        {
            cout << "MENU" << endl;
            cout << "1 Start New Game" << endl;;
            cout << "2 Continue" << endl;;
            cout << "3 EXIT" << endl;
            
            cin >> Choose;
            cout << "_______________________________" << endl;
                
            if (Choose ==1){
                WChoose = WChoose = 9;
                Create_Character();
                Create_Enemy();
                while (WChoose != 0)
                {
                    cout << "DIFFICULTY" << endl;
                    cout << "1 Normal" << endl;;
                    cout << "2 Hardcore" << endl;;

                    cin >> Choose;
                    cout << "_______________________________" << endl;
                    
                    if (Choose ==1){
                        Life_quantity = 1;
                        WChoose = 0; }
                    else if (Choose ==2){
                        Life_quantity = 0;
                        WChoose = 0; }
                    else if (Choose == 158324769)
                    {
                        return false;
                    }
                    
                    else if (Choose != 1) {
                        if (Choose != 2) {
                            cout << "Something wrong, try again" << endl; } } 
                    }
            
                Fight(); 
                return false;}
            
            else if (Choose ==2){
                Fight ();
                return false;}

            else if (Choose ==3){
                return false;}

            else if (Choose != 1) {
                if (Choose != 2) {
                    if (Choose != 3){
                        cout << "Something wrong, try again" << endl;

                        } } }
        }
        
    }
    
    else if (Choose ==29052020){
        cin >> Choose;
        cout << "_______________________________" << endl;
        while (Choose >= 1)
        {
            cout << "You have increased your level!" << endl;
            Level_Up_Character();
            Choose = Choose - 1;
        }
        Fight();
    }
    
    else if (Choose != 1) {
        if (Choose != 2) {
            if (Choose != 3) {
                if (Choose != 4){
                    if (Choose != 29052020){
                        cout << "Something wrong, try again" << endl; 
                        Fight(); } } } } }
    
    return 0;
}
int difficulty(){
    cout << "DIFFICULTY" << endl;
    cout << "1 Normal" << endl;;
    cout << "2 Hardcore" << endl;;

    cin >> Choose;
    cout << "_______________________________" << endl;
    if (Choose ==1){
        Life_quantity = 1;
        Fight();
    }
    else if (Choose ==2){
        Life_quantity = 0;
        Fight ();
    }
    else if (Choose != 1) {
        if (Choose != 2) {
            cout << "Something wrong, try again" << endl;
            difficulty();}}
}
int Game_menu2() {
    cout << "MENU" << endl;
    cout << "1 Start New Game" << endl;;
    cout << "2 Continue" << endl;;
    cout << "3 EXIT" << endl;

    cin >> Choose;
    cout << "_______________________________" << endl;
    if (Choose ==1){
        difficulty();
    }
    else if (Choose ==2){
        if (possibl_to_cont == 0)
        {
            cout << "You are not able to do that!" << endl;
            cout << "_______________________________" << endl;
            Game_menu2();
        }
        if (possibl_to_cont != 0)
        {
            Fight();
        }
          
    }
    else if (Choose ==3){
        return 0;}
    else if (Choose != 1) {
        if (Choose != 2) {
            if (Choose != 3){
                cout << "Something wrong, try again" << endl;
                cout << "_______________________________" << endl;
                Game_menu2();}}}
}
int main(){
    srand(time(NULL));
    Create_Character();
    Create_Enemy();
    Game_menu2();
    
}