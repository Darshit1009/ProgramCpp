#include<iostream>
#include<ctime>
using namespace std;
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int num=(rand()%6)+1;
    cout<<num;
    return 0;
}
