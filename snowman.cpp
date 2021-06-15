# include "snowman.hpp"
# include <iostream>
# include <string>
# include <string.h>
using namespace std;



string ariel :: snowman(int number){
    string snowperson ;
    int temp = number;
    int count =0;
    while(temp >0){
        int n = temp % 10;
        count++;
        if(n < 0 || n > 4) throw exception();
        else temp/10;
     
    }
    if(count != 8){
        throw exception();
    }

    for(int i=0 ; i<9 ; i++){
        int curr = number%10 ;
        switch(i){
            // choose hat
            case 1 :
                switch (curr){
                    case 1 :
                        snowperson += "_===_";
                        break;
                    case 2 :
                        snowperson += " ___ /n"
                                      ".....";
                        break;
                    case 3 :
                        snowperson += "  _  /n"
                                      " /_\\ ";
                        break;
                    case 4 :
                        snowperson += " ___ /n"
                                      "(_*_)";       
                        break;    
                }
            break;
            //choose nose
            case 2 :
                switch (curr){
                    case 1 :
                        snowperson += "  ,  ";
                        break;
                    case 2 :
                        snowperson += "  .  ";
                        break;
                    case 3 :
                        snowperson += "  _  ";
                        break;
                    case 4 :
                        snowperson += "     ";       
                        break;    
                }
            break;
            //choose left eye
            case 3 :
                switch (curr){
                    case 1 :
                        snowperson += "(.";
                        break;
                    case 2 :
                        snowperson += "(o";
                        break;
                    case 3 :
                        snowperson += "(O";
                        break;
                    case 4 :
                        snowperson += "(-";       
                        break;    
                }
            break;
            //choose right eye
            case 4 :
                switch (curr){
                    case 1 :
                        snowperson += ".)";
                        break;
                    case 2 :
                        snowperson += "o)";
                        break;
                    case 3 :
                        snowperson += "O)";
                        break;
                    case 4 :
                        snowperson += "-)";       
                        break;    
                }
            break;
            //choose left hand
            case 5 :
                switch (curr){
                    case 1 :
                        snowperson += "<";
                        break;
                    case 2 :
                        snowperson += "\\" ;
                        break;
                    case 3 :
                        snowperson += "/";
                        break;
                    case 4 :
                        snowperson += " ";       
                        break;    
                }
            break;
            //choose right hand
            case 6 :
                switch (curr){
                    case 1 :
                        snowperson += ">";
                        break;
                    case 2 :
                        snowperson += "/" ;
                        break;
                    case 3 :
                        snowperson += "\\";
                        break;
                    case 4 :
                        snowperson += " ";       
                        break;    
                }
            break;
            //choose Torso
            case 7 :
                switch (curr){
                    case 1 :
                        snowperson += "( : )";
                        break;
                    case 2 :
                        snowperson += "(] [)";
                        break;
                    case 3 :
                        snowperson += "(> <)";
                        break;
                    case 4 :
                        snowperson += "(   )";      
                        break;    
                }
            break;
            //choose base
            case 8 :
                switch (curr){
                    case 1 :
                        snowperson += "( : )";
                        break;
                    case 2 :
                        snowperson += "(" ")";
                        break;
                    case 3 :
                        snowperson += "(___)";
                        break;
                    case 4 :
                        snowperson += "(   )";       
                        break;    
                }
            break;
        number/=10;
    }
}