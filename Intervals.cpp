//In this challenge the user inputs two numbers (ints) and you should output the numbers between them, the interesting part if that is the number
// is less than or equals 9 you should output it as chars example: 1 -> one 2-> two and so on, if the num is more than 9 and even output Even else output odd. 

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b; //inter the intervals
    for(int i = a; a<b?i<=b:i>=b; a<b?i++:i--){  // This is great for me :) 

        if(i==1){cout<<"one\n";}
        if(i==2){cout<<"two\n";}
        if(i==3){cout<<"three\n";}
        if(i==4){cout<<"four\n";}
        if(i==5){cout<<"five\n";}
        if(i==6){cout<<"six\n";}
        if(i==7){cout<<"seven\n";}
        if(i==8){cout<<"eight\n";}
        if(i==9){cout<<"nine\n";}
        if(i>9&&i%2==0){
            cout<<"even\n";
        }
        else if(i > 9 && i%2 != 0){
            cout<<"odd\n";
        }
    }
    return 0;
}
