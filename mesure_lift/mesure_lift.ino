#include <HX711.h>

const  int  DOUT = A3 ; 
const  int  CLK = A2 ;

HX711  balance ;

void  setup ( )  { 
  Serial . begin ( 9600 ) ; 
  balance . begin ( DOUT ,  CLK ) ; 
  //Serial . print ( "Reading the ADC value: " ) ; 
  Serial . println ( balance . read ( ) ) ; 
  //Serial . println ( "Do not put any object on the scale" ) ;
  //Serial . println ("Destarando..." ) ; 
  //Serial . println ( "..." ) ;
  balance . set_scale (63122.455) ;  //The default scale is 1 
  balance . tare ( 1 ) ;   //The current weight is considered Tare.
  
  //Serial . println ( "Ready to weigh" ) ;
}
void  loop ( )  { 
  //Serial . print ( "Weight: " ) ; 
  Serial . println ( balance . get_units ( 1 ) , 3 ) ; 
  //Serial . println ( "g" ) ; 
  delay ( 0 ) ; 
}
