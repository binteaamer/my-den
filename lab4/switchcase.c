clude <stdio.h>
int main ()
{int num ;
  char month ;
    // a=0 april a1 =august 
            // j0= january j1 = june j3= july 
            //  m0= march m1=may 
            //f0 = feb  
 printf("enter month and number ");
 scanf ("%c" "%d", &month,&num );
switch (month) {
    case 'a' :
         switch (num) {
         	case 0:
         	printf (" april ");
         	break ;
         	case 1:
         	printf ("august");
         	break;
         	default :
         	printf ("wrong input ");
         	}
         	break;
    case 'j' :
         switch (num) {
         	case 0:
         	printf (" january ");
         	break;
         	case 1 :
         	printf (" june ");
         	break;
         	case 2 :
         	printf ("july ");
			 break;
         	default:
         	printf ("wrong input ");}
         	break;
  case 'm':
         switch (num) {
         	case 0:
         	printf (" may");
         	break;
         	case 1 :
         	printf (" march");
         	break;
         	default:
         	printf ("wrong input ");}
         	break;
         	
 case 'f':
         switch (num) {
         	case 0:
         	printf (" feburary ");
         	break;
         	default:
         	printf ("wrong input ");}
         
         break;	
}
}