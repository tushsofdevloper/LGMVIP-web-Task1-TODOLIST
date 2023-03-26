#include<stdio.h>
    void main(){
	    int row;
	    printf("enter no of rows: ");
	    scanf("%d",&row);
	    for(int i=1;i<=row;i++){
		    int x=1;
		    for(int j=1;j<=row;j++){
			    printf("%d",x);
			    x++;
			    if(j==1){
				    printf("%d",x=x+2);
			    }
				    else{
					    printf("%d",x=x+3);
				    }
		      
		     
		    }
		      printf("\n");
		      
	    }
    }


