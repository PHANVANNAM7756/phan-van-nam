#include <stdio.h>
#include <math.h>
int main(){
  int a, b, c;
  float p=0;
  float s=0;
  scanf("%d%d%d",&a, &b, &c);
  if (a+b>c && a+c>b && b+c>a){
    p=(a + b + c)/2;
    s=(sqrt(p)*(p-a)*(p-b)*(p-c));
    printf("di?n tích tam giác S= %f",s);
  }else {
    printf("a , b, c không ph?i là tam giác");
  }
  return 0;
}







	
  
  	



		

		



 	


  	
  	
