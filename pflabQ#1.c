main(){
	int i,j ;
	for(i=1;i<=10;i++){
	int n=65 ;
		for(j=1;j<=9;j++){
			if(i<=5 && j>=(6-i) && j<=5)
					{
					printf("%c",n);
					n++ ;
				}
			else if(i>5 && j>=5 && j<=15-i)
				{
				printf("%c",n);
				n++ ;
			}
			else 
				printf(" ");			
		}
		printf("\n");
		getch();
}
}
