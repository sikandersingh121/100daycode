#include<stdio.h>
#include<math.h>

int main(){

float a,b,c;

printf("enter cofficent of x^2:");
scanf("%f",&a);
printf("enter cofficent of x:");
scanf("%f",&b);
printf("enter constant term :");
scanf("%f",&c);

float D=(b*b)-(4*a*c);

if(D>0){

    float z=sqrt(D);
    float x=((-b)+(z))/(2*a);
    float y=((-b)-(z))/(2*a);

    printf("roots are different and are: %f, %f",x,y);

}
 else if(D==0){

    float z=sqrt(D);
    float x=((-b)+(z))/(2*a);



printf("roots are same and are: %f, %f",x,x);


}
else{
    printf("roots are complex");
}

    return 0;
}