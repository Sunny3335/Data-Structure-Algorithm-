c

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

    class Male: protected Human{

        public:
        string color;
        void sleep(){
            cout<<"Male sleeping"<<endl;
        }

        int getheight (){
            return this->height;
        }


    };



int main(){
    /* Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl; // it return some spaces
    object1.setWeight(84);
    cout<<object1.weight<<endl;
    object1.sleep(); */

    Male m1;
    // cout<<m1.height<<endl;
    cout<<m1.getheight()<<endl; // in case of protected it will not accessible directly so we have to use the getter function .

}