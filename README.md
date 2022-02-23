# First-Game-C-Plus-Plus
This is a console RPG game. The game is an endless battle with ordinary enemies and bosses, a gradual increase in the level of the character and his characteristics, during the game the levels of enemies also increase, after each battle the player has the opportunity to restore health or continue the battle. The program runs in the window console and does not use any additional libraries.

Key Features:
In menu is available to control the game offering the following commands:
  1 (START NEW GAME) 
  2 (CONTINUE) 
  3 (EXIT)
In fight is available to control the game offering the following commands:
  1 (ATTACK) 
  2 (ESCAPE) 
  3 (YOUR CHARACTER INFO)
  4 (MENU)
In difficulty is available to control the game offering the following commands:
  1 (NORMAL) 
  2 (HARDCORE) 
  3 (EXIT)
In restore health is available to control the game offering the following commands:
  1 (RESTORE) 
  2 (CONTINUE) 

  START NEW GAME - This command allows the user to start a new game, it creates a first-level user character, randomly distributing his characteristics, then creates an enemy of the same level and then transfers the user to the game difficulty selection menu.

  CONTINUE - allows the user to continue a previously started game, but when the game is closed, the user's progress is not saved, since, in my opinion, this made the game simpler and therefore not interesting.

  EXIT - allows the user to close the game.

  ATTACK – allows to starts a battle between the character and the enemy, depending on the speed of each, it is determined who is the first to inflict damage. After that, the health of everyone is checked. If the enemy dies, then the character gains experience, if the character dies, then, depending on the complexity of the game, the following will happen: if hardcore, the player will return to the menu, if normal difficulty, then the character will lose a lot of experience and restore health. If, after comparison, the character survives and does not have maximum health, then the user sees the health recovery menu.

  ESCAPE - this command allows you to change the enemy with whom the battle will take place, but at the same time the character will lose a certain amount of health in proportion to his level.

  YOUR CHARACTER INFO - allows the user to see more detailed information about the character's stats.  

  MENU - allows the user to start a new game, continue the game if the player has already started the game before and did not die in it in hardcore mode, and it also allows you to exit the game. 

  NORMAL - this option makes it so that the character has an unlimited number of lives, after death the user will be able to continue the game for his character who will restore maximum health, but the amount of experience will decrease.  

  HARDCORE - this option makes it so that there is only one life for the character, upon death the user will not be able to continue the game, he can only either start a new game or exit the game.  

  RESTORE - this option makes the character restore the maximum health value by spending a certain amount of experience of the character corresponding to his level.   

  CONTINUE (After attack) - this option makes it so that the character does not restore health, does not lose experience and proceeds to fight the same enemy, if he still has health left or starts a battle with a new enemy.

  CREATE NEW ENEMY - creates a new enemy depending on the character's level, randomly distributing his characteristics. This function is triggered immediately after killing the enemy, or when choosing ESCAPE, so in the first case the player does not need to create the enemy himself, this is done automatically, and in the second case it is the user's choice. Also, with a certain chance, instead of the usual enemy, a boss can spawn, which will be stronger than ordinary enemies.

  FIGHT - a function that is activated automatically after choosing the difficulty, it is responsible for the main operation of the game
