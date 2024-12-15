
#include<stdio.h>
#include<string.h>


int main(){
    char word[1000];
    char key;
    int i;
    int n;
    scanf("%d",&n);

    for(i=0; i<n ; i++){



        scanf("%s",word);
        key = word[0];
        count = 0;
        for(j=1;j<strlen(word);j++){
            if (key == word[j]){
                for(z = strlen(word);j<z;z--)
                    count ++;
            }
        }



    }



}
