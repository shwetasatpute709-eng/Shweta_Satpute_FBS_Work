void main()
{
 double basic =3500;
 double da,ta,hra,total;
 if(basic<=5000)
 {
 	da=basic*0.10;
 	ta=basic*0.20;
 	hra=basic*0.25;
	 }
	 else
	 {
	 	da=basic*0.15;
	 	ta=basic*0.25;
	 	hra=basic*0.30;
		 }
		 total=basic+da+ta+hra;
		 printf("basic salary%d",basic)	;
		 printf("da %f",da);
		 printf("ta %f",ta);
		 printf("hra %f",hra);
		 printf("total salary %f",total);
}

