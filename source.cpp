#include <bits/stdc++.h>

//{}
//~

using namespace std;

struct country;
struct province{
    string name;
    country *domain;
};
struct country{
    string name;
    province *capital;
};

int main() {
    country turkiye;
    province ankara,istanbul;
    turkiye.name="turkiye";
    turkiye.capital=&ankara;
    ankara.name="ankara";
    ankara.domain=&turkiye;
    istanbul.name="istanbul";
    istanbul.domain=&turkiye;
    cout<<istanbul.domain->capital->name;
        
    return 0;
}
