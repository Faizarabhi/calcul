#include<stdio.h>
#include <string.h>
int main(){
	float c,a,b;
	int k,r;

	
	printf("1-La somme\n2-La sustraction\n3-la division\n4-modulu\n5-la multiplication\n6-comapréson\n ");	
	scanf("%d",&r);
	printf("tapez la premier valeur svp\n");


	scanf("%f",&a);
	printf("tapez la deuxiéme valeur svp\n");
	scanf("%f",&b);
		
	switch(r){
		case 1: printf("%0.2f",c=a+b);break;
		case 2: printf("%.0.2f",c=a-b);break; 
		case 3: printf("%.0.2f",c=a/b);break;
//	j'essyé dans autre app est le résultat n'est pas logique
//		case 4: {
//				int(a);
//				int(b);
//				printf("%d\n",a);
//				printf("%d\n",b);
//				printf("%d",k=a%b); 
//				break;
//		}
		case 5:printf("%f",a*b);
		case 6:{
		
			if(a>b){
				printf("%f > %f",a,b);
			}
			else if(a<b){
				printf("%f < %f",a,b);
			}
			else{
				printf("%f = %df",a,b);
			}
			
			
			
			
			break;
		}
		
	}

	


}
