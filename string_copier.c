#include<stdio.h>
#include<string.h>
//create a program that copies src string to dst string
 
void copy(char* dst, char* src){

    while (*src != '\0') {
        *dst = *src;
        src++;
        dst++;

    }

    //after exiting while loop, dst is pointing to the last spot in src, so manually add the null charcter
    *dst = '\0';

}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  int len = strlen(srcString) + 1;
  char dstString[len]; 

  copy(dstString, srcString);
  printf("%s\n", dstString);
 
}