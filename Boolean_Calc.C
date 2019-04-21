#include<stdio.h>
void main()
{int c,n,t,s; int a[10],b[10]; char y;int d[20];int i=0; int j; int g,h,f;
char w;
new:
printf("1.BOOLEAN CALUCLATION\n2.ARTHMETIC CALCULATION\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&i);
switch(i)
{
case 1: printf("BOOLEAN ALGEBRA CALCULATION\n");
	printf("1.AND\n2.OR\n3.NOT\n4.NAND\n.NOR\n6.XOR\n7.EXNOR\n8.DECIMAL TO BINARY CONVERSION\n");
	printf("enter your choice:");
	scanf("%d",&s);
	printf("Enter only 0's and 1's for calculation\n");
	switch(s)
	{
	case 1: printf("AND OPERATION\n");
		printf("Enter two no values to perform and operation:\n");
		printf("Enter the no of bits to be calculated:\n");
		scanf("%d",&n);
		printf("Enter the [%d] values of a\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		printf("Enter the [%d] values of b\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&b[i]);
		}
		if(a[i]>1 || b[i]>1)
		{
		printf("Enter the nos range between 0 and 1\n");}
		for(i=0;i<n;i++)
		{
		if(a[i]==1 && b[i]==1)
		{
		printf("ANS IS 1\n");
		}
		else
		{
		printf("ANS IS 0\n");
		}
		}
		break;
	case 2: printf("OR OPERATION\n");
		printf("Enter two no values to perform or operation:\n");
		printf("Enter the no of bits to be calculated:\n");
		scanf("%d",&n);
		printf("Enter the [%d] values of a\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		printf("Enter the [%d] values of b\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&b[i]);
		}
		if(a[i]>1 || b[i]>1)
		{
		printf("Enter the nos range between 0 and 1\n");}
		for(i=0;i<n;i++)
		{
		if(a[i]==0 && b[i]==0)
		{
		printf("ANS IS 0\n");
		}
		else
		{
		printf("ANS IS 1\n");
		}
		}
		break;
	case 3: printf("NOT OPERATION\n");
		printf("Enter two no values to perform not operation:\n");
		printf("Enter the no of bits to be calculated:\n");
		scanf("%d",&n);
		printf("Enter the [%d] values of a\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
		if(a[i]==1)
		{
		printf("ANS IS 0\n");
		}
		else
		{
		printf("ANS IS 1\n");
		}
		}
		break;
       case 4: printf("NAND OPERATION\n");
		printf("Enter two no values to perform nand operaion:\n");
		printf("Enter the no of bits to be calculated:\n");
		scanf("%d",&n);
		printf("Enter the [%d] values of a\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		printf("Enter the [%d] values of b\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&b[i]);
		}
		if(a[i]>1 || b[i]>1)
		{
		printf("Enter the nos range between 0 and 1\n");}
		for(i=0;i<n;i++)
		{
		if(a[i]==1 && b[i]==1)
		{
		printf("ANS IS 0\n");
		}
		else
		{
		printf("ANS IS 1\n");
		}
		}
		break;
       case 5: printf("NOR OPERATION\n");
		printf("Enter two no values to perform nor operation:\n");
		printf("Enter the no of bits to be calculated:\n");
		scanf("%d",&n);
		printf("Enter the [%d] values of a\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		printf("Enter the [%d] values of b\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&b[i]);
		}
		if(a[i]>1 || b[i]>1)
		{
		printf("Enter the nos range between 0 and 1\n");}
		for(i=0;i<n;i++)
		{
		if(a[i]==0 && b[i]==0)
		{
		printf("ANS IS 1\n");
		}
		else
		{
		printf("ANS IS 0\n");
		}
		}
		break;
	case 6: printf("XOR OPERATION\n");
		printf("Enter two no values to perform xor operation:\n");
		printf("Enter the no of bits to be calculated:\n");
		scanf("%d",&n);
		printf("Enter the [%d] values of a\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		printf("Enter the [%d] values of b\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&b[i]);
		}
		if(a[i]>1 || b[i]>1)
		{
		printf("Enter the nos range between 0 and 1\n");}
		for(i=0;i<n;i++)
		{
		if((a[i]==0 && b[i]==0) || (a[i]==1 && b[i]==1))
		{
		printf("ANS IS 0\n");
		}
		else
		{
		printf("ANS IS 1\n");
		}
		}
		break;
	case 7: printf("XNOR OPERATION\n");
		printf("Enter two no values to perform xnor operation\n");
		printf("Enter the no of bits to be calculated:\n");
		scanf("%d",&n);
		printf("Enter the [%d] values of a\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		printf("Enter the [%d] values of b\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&b[i]);
		}
		if(a[i]>1 || b[i]>1)
		{
		printf("Enter the nos range between 0 and 1\n");}
		for(i=0;i<n;i++)
		{
		if((a[i]==0 && b[i]==0) || (a[i]==1 && b[i]==1))
		{
		printf("ANS IS 1\n");
		}
		else
		{
		printf("ANS IS 0\n");
		}
		}
		break;
	case 8: printf("DECIMAL TO BINARY CONVERSION\n");
		printf("Enter the decimal no to be converted\n");
		scanf("%d",&n);
		while(n>0)
		{
		d[i]=n%2;
		i++;
		n=n/2;
		}
		for(j=i-1;j>=0;j--)
		{
		printf("%d",d[j]);
		}
		break;
	default: printf("Number exceeded the limit\n");
		 printf(" if you continue: ?? (press Y)\n");
		 scanf("%c",&w);
		 if(w==y)
		 {
		 goto new;
		 }
		 else
		 {
		 printf("THANK YOU\n");
		 }
		 break;}
	break;
case 2: printf("ARITHMETIC CALCULATION\n");
	printf("1.ADDITION\n2.SUBTRACT\n3.MULTIPLICATION\n4.DIVISION\n5.MODULUS\n");
	printf("Enter your choice:");
	scanf("%d",&t);
	switch(t)
	{
	case 1: printf("ADDITION\n");
		printf("Enter two integer values to perfrom additon calculation\n");
		scanf("%d%d",&g,&h);
		printf("ans is %d",g+h);
		break;
	case 2: printf("SUBTRACTION\n");
		printf("Enter two integer values to perfrom subtraction calculation\n");
		scanf("%d%d",&g,&h);
		printf("ans is %d",g-h);
		break;
       case 3: printf("MULTIPLICATION\n");
		printf("Enter two integer values to perfrom multiplycalculation\n");
		scanf("%d%d",&g,&h);
		printf("ans is %d",g*h);
		break;
	 case 4: printf("DIVISION\n");
		printf("Enter two integer values to perfrom divison calculation\n");
		scanf("%d%d",&g,&h);
		printf("ans is %d",g/h);
		break;
	 case 5: printf("MODULUS\n");
		printf("Enter two integer values to perfrom moduluscalculation\n");
		scanf("%d%d",&g,&h);
		printf("ans is %d",g%h);
		break;
	 default: printf("THANK YOU\n");
		 printf("If you want to continue: ?? (press Y)\n");
		 scanf("%c",&w);
		 if(w==y)
		 {
		 goto new;
		 }
		 else
		 {
		 exit(0);
		 }
	    }
	    }
     }
