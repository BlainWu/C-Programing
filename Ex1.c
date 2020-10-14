/*while(there is another line)
 *  if(it's longer than the previous longest)
 *      save it
 *      save its length
 *  print longest line
 * */

#include <stdio.h>
#define MAXLINE 1000

void copy(char to[],char from[]);
int getline(char line[], int maxline);

int main(){
    int len,max;
    char line[MAXLINE] , longest[MAXLINE];

    max = 0 ;
    while((len = getline(line,MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy(longest,line);
        }
    }

    if (max >0)
        printf("%s",longest);
    return 0;
}


void copy(char to[],char from[]){
    int i ;

    i = 0;
    while((to[i] = from[i]) != '\0')
        i++;
}

int getline(char line[], int maxline){
    int c , i;
    for(i = 0;i<maxline-1 && (c = getchar()) != EOF && c!='\n';i++){
        line[i] = c ;
    }
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}