#include <stdio.h>
int main(){
	int select,score,in1,in2,in3 ;
	printf("SELECT 1 2 3 4 5:") ;
	scanf("%d",&select) ;
	switch(select){
		case 1:{
	printf("Input Yout Grade:") ;
	scanf("%d",&score) ;
	
	if(score>100||score<0){
		printf("Error") ;
	}	
	else if(score>=80){
		printf("A") ;
	}
	else if(score>=75&&score<=79){
		printf("B+") ;
	}
	else if(score>=70&&score<=74){
		printf("B") ;
	}
	else if(score>=65&&score<=69){
		printf("C+") ;
	}
	else if(score>=60&&score<=64){
		printf("C") ;
	}
	else if(score>=55&&score<=59){
		printf("D+") ;
	}
	else if(score>=50&&score<=54){
		printf("D") ;
	}
	else if(score>=0&&score<=49){
		printf("F") ;
	}
	break ;
	}
	case 2:{
	
		printf("Input 3 Number:") ;
		scanf("%d %d %d", &in1, &in2, &in3 ) ;
	if(in1>in2&&in2>in3){

		printf("Max : %d \nMin : %d ",in1,in3) ;
    }
	else if(in1>in3&&in3>in2){

		printf("Max : %d \nMin : %d ",in1,in2) ;
	}
	else if(in2>in1&&in1>in3){

		printf("Max : %d \nMin : %d ",in2,in3) ;
	}
	else if(in2>in3&&in3>in1){

		printf("Max : %d \nMin : %d ",in2,in1) ;
	}
	else if(in3>in1&&in1>in2){

		printf("Max : %d \nMin : %d ",in3,in2) ;
	}
	else if(in3>in2&&in2>in1){

		printf("Max : %d \nMin : %d ",in3,in1) ;
	}
	break;
	}
	case 3:{
	
		printf("Input 1:") ;
		scanf("%d",&in1) ;
		printf("Input 2:") ;
		scanf("%d",&in2) ;
		printf("Ans = %d",in1+in2);
		break ;
		}
	
	case 4:{
		printf("Input Number:") ;
		scanf("%d",&in1) ;
		for(int i=1; i<13 ; i++){	
			printf("%d x %d = %d\n",in1,i,in1*i) ;
		}
		break;
	}
	case 5:{
		for(int i=1 ; i<=30; i++){
			if((i==1 || i%2==0 || i%3==0 || i%5==0 || i%7==0 )&&(i!=2 && i!=3 && i!=5 && i!=7)){
			continue ;
		
			
		}
			printf("%d ",i) ;
		}
		break;
	}
	}

	
	
	return 0 ;
}
