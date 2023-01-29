#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void logs(int command,int way,int player){
    string log;
    log += to_str(command);
}



void zamena(int* command){
 int zamena;
    int nakogo;
    char selection;
   bool player=true;
    cout << "кого вы хотите заменить - ";
        cin >> zamena;
        
        do{
        for(i = 0;i < 6;i++){
            if(command[i] == zamena){
                player = false;
                break;
            }
        }
            if(player){
                cout << "Invalid player!" << endl;
            }
        }while(player);
        
     cout << "кем вы хотите заменить - ";    
         cin >> nakogo;
          cout << "подтвердите E - ";
    cin >> selection;
     if (selection == 'E') {
        oneteam[i] = nakogo;
        cout << endl;
    }
}

void one(int* oneteam, int* twoteam){
    
 
}

void perexod(int* oneteam){
    int sdvig = oneteam[5] ;
    for(int i=5 ; i>0 ; i--){
        oneteam[i]=oneteam[i-1];
        
    }
    oneteam[0]=sdvig;
 
    
}


void zadacha2(int* oneteam, int* twoteam)
{
    for(int i=0 ;i <3;i++){
        cout<<oneteam[i]<<" ";
        
    }
    
    cout<<"    ";
    
      for(int i=0 ;i <3;i++){
        cout<<twoteam[i]<<" ";
        
    }
    cout<<endl;
    
    for(int i=5 ;i>2 ; i--){
        cout<<oneteam[i]<<" ";
        
    }
    
    cout<<"    ";
      for(int i=5 ; i>2 ; i--){
        cout<<twoteam[i]<<" ";
        
    }
    
    cout<<endl;
    
}

void zadacha1 (int* oneteam, int* twoteamint, &winoneteam , int& wintwoteam){
   int win1 = 0 ;
   int win2 = 0;

    while (win1 < 3 && win2 <3){
         int winer=0;
            int way=0;
            int player=0;
            int lastwiner=0;
            int whowiner=0;
          int count1=0;
          int count2=0;
        while((count1<25&&count2<25)or(count1-count2<2 or count2-count1<2)){
            
           printf("Счет матча %d (%d) – %d (%d).",win1, win2, count1, count2);
           
            zadacha2 (oneteam, twoteam);
            
            cout << "кто победит 1 команда или команда 2,\n3 - замена] - ";
            cin >> whowiner;
            cout << endl;
            
            if (whowiner == 3) {
                int command = 0;

                cout << "какая команда? - ";
                cin >> command;

                if (command == 1) {
                    zamena(oneteam);
                }
                else {
                    zamena(twoteam);
                }
                continue;
            }
           
            cout<<"выйграл розыгрыш";
            cin>>winer;
            
            cout<<"выйграл \n 1-Атака \n 2-Блок \n 3-Подача \n 4-Ошибка";
            cin>>way;
            
            if (whowiner==1){
                count1++
         perexod(oneteam);
            }
            else{
                  count2++
                 perexod(twoteam);
            }
            if(last_win != who_win){ 
             if (whowiner==1){
                count1++
            }
            else{
                  count2++
            }
            }
            else{
            if(count1>count2){
                win1++
            }
            else{
                win2++
            }
            }
        }
        
        
      }
    
    }


int main()
{
   int oneteam[6] = {21,2,31,43,23,11};
   int twoteam[6] = {22,123,1,55,99,10};
   zadacha2(oneteam,twoteam);
   perexod(oneteam);
   zadacha2(oneteam,twoteam);
  
    
}
