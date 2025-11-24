#include<stdio.h>
void main()
{int option;
printf("the food items available are:\n");
printf("1.panipuri\n");
printf("2.cotton candy");
printf("3.chicken biryani\n");
printf("4.bitter guard biryani\n");
printf("please enter the option to select the food items\n");
scanf("%d",&option);
switch(option)
{case 1:
{printf("panipuri is ordered");
}break;
case 2:
{printf("cotton candy is ordered");
}break;
case 3:
{printf("chicken biryani is ordered");
}break;
case 4:
{printf("bitter guard is ordered");
}break;
default:
{printf("please select the valid option");
}
}

}