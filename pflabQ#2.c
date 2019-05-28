main(){
	int i,j ;
	for(i=1;i<=5;i++){
		for(j=1;j<=7;j++){
			
				if(i<=4 && j>=5-i && j<=3+i)
					printf("*");
				else if(i>4 && j==4)
					printf("*");
				else
					printf(" ");
}
		printf("\n");
}
}

