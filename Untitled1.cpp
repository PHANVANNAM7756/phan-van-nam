#include <stdio.h>
#include <string.h>
void upperCase(char s[]){
  int i,n;
  n=strlen(s);
  for(i=0;i<n;i++){
    if(s[i]>='a' && s[i]<='z')
      s[i]=s[i]-32;
  }
  printf("%s",s);
}
int main()
{
    char s[40];
    printf("nhap chuoi ky tu:");
    gets(s);
    upperCase(s);
    return 0;
}

