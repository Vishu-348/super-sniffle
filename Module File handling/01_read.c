#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("spider.txt", "r");
   
    while(1){
        char ch = fgetc(ptr);
        printf("%c\n",ch);
        
        if(ch == EOF){
            break;
        }
    }

    fclose(ptr);
    
    return 0;
}