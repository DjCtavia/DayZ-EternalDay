# DayZ-EternalDay

Eternal Day is a mod that allow player to set a specific time slot. However, it was initially created to have an endless day. But users adjust the parameters to their wishes.

Quick warn: Some of functions are actually not in actual mod, they are actually Work In Progress [WIP]

## What can you actually  do ?

* Have a specific time slot on which the server must run
* Choose the current date in play

## What could we do later ?

* Admin command for changing the specific time slot
* Admin command for generate random date and time
* Voting for day ?

## How to use the mod ?

First thing first, subscribe to the [workshop mod here.](https://steamcommunity.com/sharedfiles/filedetails/?id=1561447232)
Once downloaded, locate the workshop folder of steam. Example: ' steam\steamapps\workshop\content '

DayZ standalone use the ID **221100** and for my mod the ID is **1561447232**, so for finding path to the mod, you need to go through this: ' steam\steamapps\workshop\content\221100 '.

You will need to copy the folder with the ID **1561447232** into the main folder of DayZServer. (Only the folder, not its content)
Once you have the folder, you can rename however you want, but it is better to use the name of the mod.

* Create a.bat that launches your server with at least the following option: **-mod=YourModName**
* Go into mpmissions folder, go into the mission used for the server and find the class named **CustomMission**.
  * Add to the class a member of type ref EternalDay
  * In the constructor or init, create a reference to EternalDay linked to the previously created member.
  
If you don't understand the last part in class named CustomMission, I invite you to look through the **Example** folder on this github.

![Help1](https://i.imgur.com/0L8d1mR.png)
![Help2](https://i.imgur.com/H6y26pf.png)
![Help3](https://i.imgur.com/Hjkxzaq.png)
