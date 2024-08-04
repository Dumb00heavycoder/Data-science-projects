#include <iostream> 
using namespace std; 

class Class{ 
    string StudentName[60]; 
    int Studentheight[60]; 
    int counter; 
    public: 
    void inttCounter(void) {counter = 0;} 
    void setdata(void); 
    void getdata(void);
};
void Class :: setdata(void) {
    cout <<"Enter the name of the student number " << counter + 1 << endl;
    cin >> StudentName[counter];
    cout <<"Enter the height of the student number "<< counter + 1 << endl; 
    cin >> Studentheight[counter];
    counter++;
}
void Class :: getdata(void){
    for (int i=0; i <counter ;i++) {
        cout << "Name and height = "<< StudentName[i] << ", "<< Studentheight[i] << "cm" << endl;
    }
}
int main () {
    Class grade8 ;
    grade8.inttCounter();
    grade8.setdata();
    grade8.setdata();
    grade8.setdata();
    grade8.getdata();
    return 0;
}