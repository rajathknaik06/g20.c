/*Garden Area Decoration:



John is planning to renovate his property and wants to update the layout of his house. The total area of his property is marked by a large square, while his house, which is situated within this property, is marked by a smaller square inside the larger one.



The side length of the larger square, representing the total area of the property, is a meter, and the side length of the smaller square, representing the house, is b meters. John wants to determine how much space remains available for garden decoration after accounting for the area occupied by his house.



Given the side lengths of these two squares, write a program to compute the area available for decoration outside the house.

Input format :
The first line contains an integer a, which represents the side length of the larger square, denoting the total area of the property.

The second line contains an integer b, which represents the side length of the smaller square, denoting the area occupied by the house.

Output format :
Print the area that will be available for decoration after subtracting the area of the house from the total area.*/




#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=(a*a)-(b*b);
    printf("Area to be decorated is %d",c);              //7 3
    return 0;
}
