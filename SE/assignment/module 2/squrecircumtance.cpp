#include <stdio.h> 

int width;          
int height;         

int area;           
int perimeter;      

int main() {
    
	//height = 7;
	//width = 5;


    printf("Enter length of rectangle: ");
    scanf("%f", &height);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);


    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
   
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

    return(0);
}

