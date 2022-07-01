#include <stdio.h>

void main(){
    int hour,min,to_min,nearest; // Target input
    int dep_to_min,to_h,to_m; // Plane Departures Conversion
    int dep[8] = {800,943,1119,1247,1400,1545,1700,2145},dep_m[8]; // Plane Departures
    for(int i=0;i<8;i++){
        dep_to_min = (dep[i] - (dep[i] % 100)) * 60 + (dep[i] % 100);
        dep_m[i] = dep_to_min;
    }
    printf("Enter a time: ");
    scanf("%d:%d",&hour,&min);
    to_min = (hour*100) * 60 + min;
    for(int i=0;i<8;i++){
        if(dep_m[i]<to_min){
            nearest = dep_m[i];
        }
    }
    to_m = nearest % 100;
    to_h = (nearest - to_m) / 6000;
    if(to_m == 0 && to_h == 0){ to_h = 8;}
    printf("Closest available time is: %d:%d",to_h,to_m);
}
