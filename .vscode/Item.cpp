#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Artikul{
    public:
    string ime = "";
    int cena = 0;
};
void inputData(Artikul& art){
    cout<<"Enter item name: ";
    getline(cin>>ws,art.ime);
    cout<<"Item price: ";
    cin>>art.cena;
}
int main(){
    int broi;
    cout<<"Number of items to input: ";
    cin>>broi;
    vector<Artikul> list;
    for(int i=0;i<broi;i++){
        Artikul newArt;
        inputData(newArt);
        list.push_back(newArt);
    }
    int niska_cena = list[0].cena;
    vector<Artikul> final_list;
    for(const Artikul& i : list){
        if(niska_cena > i.cena){
            niska_cena = i.cena;
        }
    }
    for(const Artikul& i : list){
        if(niska_cena == i.cena){
            final_list.push_back(i);
        }

    }
    for(const Artikul& i : final_list){
        cout<<"================================="<<endl;
        cout<<"Item: "<<i.ime<<endl<<"Price: "<<i.cena<<endl;
    }
}