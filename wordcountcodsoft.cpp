
#include<iostream>
using namespace std;

int main(){
    string text;
     int count=0, word=0;
     cout<< " Enter the text"<< endl;
     getline(cin, text);
     for(int i=0; text[i]!='\0'; i++){

        if(text[i]==' '){
            if(count!=0)
            {
                word++;
            }
            count =0;
        }
        else {
            count++;
        }
     }

     cout << count;
     if( count!=0){
        word++;
     }
cout<< " Total number of words in the given text are : "<< word;


    return 0;
}