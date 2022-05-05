# Operation of the balance
### The balance works with a gauge sensor working by a wheaston bridge. This sensor measures a weight witch is saved by an arduino card with the [program of acquisition](https://github.com/fluidodinamica/balance_tunel_de_viento/blob/main/_talonnage_masse.ino). To saved the valors give by the arduino program, we should use a software called [CoolTerm](https://coolterm.en.lo4d.com/window). From the weight valors of the sensor we can find the valors of drag force using fundamental principle of statics ; according to the different forces undergone by the balance, we have the following equation:
<p align="center">
  <img src="https://user-images.githubusercontent.com/104587276/166970391-a733e828-1131-4365-bf0a-195d40c10461.png"/>
</p>  
