#include <stdio.h>
/*

Input : 5
Output :
    *
   **
  ***
 ****
*****
*/
int main() {
	//code
int i,j;
int n;
scanf("%d",&n);
int gg=n;
while(gg!=0){
for(i=0;i<gg-1;i++)
printf(" ");
for(j=gg-1;j<n;j++)
	printf("*");
	
	printf("\n");
gg--;
    
  }
	return 0;
}
