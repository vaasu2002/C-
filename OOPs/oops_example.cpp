#include <iostream>
using namespace std;
class Student{
    int age, standard;
    string first_name, last_name;
    
    public:
    void set_age(void);
    void set_standard(void);
    void set_first_name(void);
    void set_last_name(void);
    void get_data(void);
    
};

void Student ::set_age(void){
    cin>>age;
}
void Student ::set_standard(void){
    cin>>standard;
}

void Student ::set_first_name(void){
    cin>>first_name;
}

void Student ::set_last_name(void){
    cin>>last_name;
}

void Student ::get_data(void){
    cout<<age <<standard <<first_name<<last_name<<endl;
}


int main(){
    Student st;
    st.set_age();
    st.set_standard();
    st.set_first_name();
    st.set_last_name();
    st.get_data();
}
