# include<iostream>
using namespace std;
/*class Distance{
    private:
    int meters;
    public:
    Distance(){
        meters = 5;
    }
    void disp(){
        cout<<"meters :"<<meters<<endl;
    }
    friend void addvalue(Distance &d);
};
void addvalue(Distance &d){
    d.meters = d.meters +7;
}
int main(){
    Distance obj;
    obj.disp();
    cout<<endl;
    addvalue(obj);
    obj.disp();
    return 0;

}*/
class Box{
    double width;
    public:
    friend void printwidth(Box box);
    void setwidth(double wid);
};
void  Box::setwidth(double wid){
    width = wid;
}
void printwidth(Box box){
    cout<<"box width is:"<<box.width<<endl;
}
int main(){
    Box b;
    b.setwidth(10.05);
    printwidth(b);
    return 0;
    
}