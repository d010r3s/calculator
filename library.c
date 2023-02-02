#include "library.h"


float input(const char ch[]) {
    int i=3,j=0; char temp[10];
    while(ch[i] !='\0')
    {
        if(ch[i]==' ') {i++; break;}
        i++;
    }
    while(ch[i]!='\0')
    {
        temp[j]=ch[i];
        j++;i++;
    }
    return degree(atoi(temp));
//else if(m==2) return atoi(temp);
//else return 0;
}



