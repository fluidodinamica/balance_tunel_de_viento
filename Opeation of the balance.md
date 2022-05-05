# Operation of the balance
### The balance works with a gauge sensor working by a wheaston bridge. This sensor measures a weight witch is saved by an arduino card with the [program of acquisition](https://github.com/fluidodinamica/balance_tunel_de_viento/blob/main/_talonnage_masse.ino). To saved the values give by the arduino program, we should use a software called [CoolTerm](https://coolterm.en.lo4d.com/window). From the weight values of the sensor we can find the values of drag force using fundamental principle of statics ; according to the different forces undergone by the balance, we have the following equation:
<p align="center">
  <img src="https://user-images.githubusercontent.com/104587276/166970391-a733e828-1131-4365-bf0a-195d40c10461.png"/>
</p>  

### With this method, we can measure the drag force of any module for a speed know. For example we can measure the drag force of a basic cylinder for some speed and compared the result with theorics values :
<p align="center">
  <img src="https://user-images.githubusercontent.com/104587276/166973557-18a1a91c-e890-4137-a0f2-bf0f8cc8a3a8.png"/>
</p> 

### We notice a gap between the theoric and experimental values, this gap can be fix by taking acount the drag force of the module support. Indeed by measuring the drag froce of the module support alone, we find the following sheet :
<p align="center">
  <img src="https://user-images.githubusercontent.com/104587276/166975389-e1400ceb-d474-4373-8ef0-5102f68a3811.png"/>
</p> 

### Now, by subtracking the weight measured for the module support alone to the weight measured for the module, we find drag force of the cylinder much closer of the theoric values : 
<p align="center">
  <img src="https://user-images.githubusercontent.com/104587276/166976281-332447a3-1565-4d8e-b448-cf27f00cc306.png"/>
</p> 


