#include <iostream>
using namespace std;

char findGrade(double x){
    if(x>=91){
        return 'A';}
        else if(x<=90&&x>=76){
        return 'B';}
        else if(x<=75&&x>=61){
        return 'C';}
        else if(x<=60&&x>=46){
        return 'D';}
        else if(x<=45){
        return 'F';}
}
int main(){
    
cout << findGrade(91);
cout << findGrade(60.1);

return 0;
}