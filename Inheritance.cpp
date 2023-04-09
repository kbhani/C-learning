#include<iostream>
using namespace std;

// class  <derived_class_name> : <access-specifier> <base_class_name>
// {
//         //body
// }
// life -> ..... -> monkey
// unicellular(control, movement, respiration, consumption(...), dying) -> multicellular(specialization/task distribution) -> under/abov_Sea[diverification of environment](exploration) -> branching to monkeys 

class Life {
    bool control = true;
    bool locomation;
    bool respiration = true;
    bool consumption = true;
        // deconstructor void dying();
    public:
    
};
class MultiCellular : private Life  {
    public:
        void assign_environment();
};

class Sea : private MultiCellular {
    bool is_lung = false;
    public: 
};

class Land_animals : private MultiCellular {
    bool is_lung = true;
    bool is_walk = true;
    bool is_fly = false;
    bool is_swim = false;
    public: 
        
};

class Reptiles : private Sea, private Land_animals {
    bool is_lung = true;
    // bool is_walk = true;  some walk, some slither
    //  bool is_fly = false; flying reptilian dinosaurs ?
    //  bool is_swim = true; true for some, false for some
    public:
};

class Birds : private Land_animals{
    public:
};

class Mammals : private Land_animals{
    public:
};

class Monkey : private Mammals{
    public:
};

int main(){
    Monkey Langoor;
}


/////SUTTTTAAAAAA//////