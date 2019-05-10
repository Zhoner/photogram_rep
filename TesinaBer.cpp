#include <stdlib.h>
#include <stdio.h>

class ByteHandle{
    public:

    char addBit(){

    }

    char minusBit(){

    }

    // c -> input, i -> immagine
    void funz(char* input, char img[]){
        
        foreach( char c in input ){
            int k ;
            for(int i = 0; i< 8 ; i++){
                if(ByteHandle.getBit(c,i) ^ ByteHandle.getBit(img[k],8) )
                    ByteHandle.changeBit(img[k], ByteHandle.getBit(c,i) );
                k++;
            }
        }

    }


};

int main(int argc , char* argv[]){
    int x = 0b101;
    int y = 0b1;

    if(x & y){
        printf("sono uguali");
    }else{
        printf("sono diversi");
    }

    int res = x - 1 ;
    printf("%d",res);

}