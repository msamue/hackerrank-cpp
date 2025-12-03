#include <iostream>
using namespace std;

class Student {
    private:
        int age, standard;
        string fname, lname;
    public:
        void set_age(int set_age) {
            age = set_age;
        };
        int get_age(){
            return age;
        };
        
        void set_fname(string set_fname) {
            fname = set_fname;
        };
        string get_fname(){
            return fname;
        };
        
         void set_lname(string set_lname) {
            lname = set_lname;
        };
        string get_lname(){
            return lname;
        };
        
        void set_standard(int set_standard) {
            standard = set_standard;
        };
        int get_standard(){
            return standard;
        };
};

int main() {
    Student John;
    int uage, ustandard;
    string ufname, ulname;
    cin >> uage >> ufname >> ulname >> ustandard;
    
    John.set_age(uage);
    John.set_fname(ufname);
    John.set_lname(ulname);
    John.set_standard(ustandard);
    
    cout << John.get_age() << endl << John.get_lname() << ", " << John.get_fname() << endl << John.get_standard() << "\n\n"; 
    
    cout << John.get_age() << "," << John.get_fname() << "," << John.get_lname() << "," << John.get_standard();
    
    return 0;
}
