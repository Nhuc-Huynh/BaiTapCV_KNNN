#include <iostream>

using namespace std;

int main()
{   int a1,b1,c1,a2,c2,b2;
    cin >>a1>>b1>>c1;
    cin >>a2>>b2>>c2;
    cout << (a1+a2+(b1+b2+(c1+c2)/60)/60)<<" "<<((b1+b2+(c1+c2)/60)%60)<<" "<<((c1+c2)%60);
    return 0;
}
