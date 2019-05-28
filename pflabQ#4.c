#define true 1
#define false 0
main(){
	int rs,mod,div,z=0;
	printf("Enter Amount:\n");
	scanf("%d",&rs);
	mod=rs%1000 ;
	div=rs/1000 ;
	printf("mod=%d and div=%d.",mod,div);
	printf("\n Thousand notes= %d.",div);
	if(mod>=500){
		mod=mod-500 ;
		z=true ;
		}
		mod=mod/100 ;
	printf("\n Hundred Notes= %d.",mod);
	printf("\n Five Hundred Notes =%d.",z);
}
