#include<stdio.h>

int main(){
    
    FILE *f1 = fopen("file1.txt","r");
    FILE *f2 = fopen("file2.txt","r");
    FILE *f3 = fopen("file3.txt","w");
    char c;
    while ((c=fgetc(f1))!=EOF){
        fputc(c,f3);
    }
    while ((c=fgetc(f2))!=EOF)
    {
        fputc(c,f3);
    }
    fclose(f1);fclose(f2);fclose(f3);
    return 0;
}