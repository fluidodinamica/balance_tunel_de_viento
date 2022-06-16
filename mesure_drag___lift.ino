#include <HX711.h>

const  int  DOUTD = A1 ; 
const  int  CLKD = A0 ;
const  int  DOUTP = A3 ; 
const  int  CLKP = A2 ;

HX711  balanced ;
HX711  balancep ;

void  setup ( )  { 
  Serial . begin ( 9600 ) ; 
  balanced . begin ( DOUTD ,  CLKD ) ; 
  //Serial . print ( "Reading the ADC value: " ) ; 
  Serial . println ( balanced . read ( ) ) ; 
  //Serial . println ( "Do not put any object on the scale" ) ;
  //Serial . println ("Destarando..." ) ; 
  //Serial . println ( "..." ) ;
  balanced . set_scale (156433.477) ;  //The default scale is 1 
  balanced . tare ( 1 ) ;   //The current weight is considered Tare.

  Serial . begin ( 9600 ) ; 
  balancep . begin ( DOUTP ,  CLKP ) ; 
  //Serial . print ( "Reading the ADC value: " ) ; 
  Serial . println ( balancep . read ( ) ) ; 
  //Serial . println ( "Do not put any object on the scale" ) ;
  //Serial . println ("Destarando..." ) ; 
  //Serial . println ( "..." ) ;
  balancep . set_scale (63122.455) ;  //The default scale is 1 
  balancep . tare ( 1 ) ;   //The current weight is considered Tare.

  //Serial . println ( "Ready to weigh" ) ;
}
void  loop ( )  { 
  Serial . print ( "Drag: " ) ; 
  Serial . println ( balanced . get_units ( 1 ) , 3 ) ; 
  //Serial . println ( "g" ) ; 
  Serial . print ( "Lift: " ) ; 
  Serial . println ( balancep . get_units ( 1 ) , 3 ) ; 
  //Serial . println ( "g" ) ; 
  delay ( 0 ) ; 
}
