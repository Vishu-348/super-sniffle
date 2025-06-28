#include<stdio.h>


int main(){
    FILE *ptr;
    ptr = fopen("data.txt","w");
    char st[50];
    

    if(ptr == NULL){
        printf("The file is  not opened\n");
    }
    else{
        printf("The file is opened\n");
        
        // Writing to file 
        scanf("%s",st);
        fputs(st,ptr);

        fclose(ptr);
       
        // reading from file
        ptr = fopen("data.txt","r");
        
        if(ptr == NULL){
            printf("Error: The file cannot be opened\n");
        }
        while (fgets(st, 100, ptr)){
        printf("%s", st);
        }

        fclose(ptr); 
    }
    
   
    return 0;
    
    
}