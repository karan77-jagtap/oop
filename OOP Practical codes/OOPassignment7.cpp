#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;

int main(){
    typedef map<string,int>mapType;
    mapType populationMap;

    populationMap.insert(pair<string,int>("maharastra",665433));
    populationMap.insert(pair<string,int>("Rajasthan",987643));
    populationMap.insert(pair<string,int>("karnataka",654377));
    populationMap.insert(pair<string,int>("panjab",875422));

    mapType::iterator iter;
    cout<<"=====population of states in India====";
    cout<<"\n size of Population"<<populationMap.size()<<"\n";
    string state_name;
    cout<<"\n enter name of state:";
    cin>>state_name;
    iter=populationMap.find(state_name);

    if(iter!=populationMap.end())
    cout<<state_name<<"s population is"<<iter->second;
    else
    cout<<"key is not in population\n";
    populationMap.clear();
    return 0;

}

