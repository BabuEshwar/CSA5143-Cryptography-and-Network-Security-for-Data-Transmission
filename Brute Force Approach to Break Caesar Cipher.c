#include<stdio.h>
#include<string.h>
int main(){
    char message[]="UDV WKLV VLGH";
    char letters[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int key,i,j;
    char translated[100];
    for(i=0;i<strlen(letters);key++){
        translated[0]='\0';
        for(j=0;i<strlen(message);i++){
            char ch=message[i];
            if(strchr(letters,ch)!=NULL){
                int num=strchr(letters,ch)-letters;
                num=(num-key%26);
                if(num<0){
                    num+=26;
                }
                translated[j++]=letters[num]; 
            } else{
                translated[j++]=ch;
            }
        }
        translated[j]='\0';
        printf("%s\n",translated);
    }
    return 0;

}