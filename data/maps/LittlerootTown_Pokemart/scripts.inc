LittlerootTown_Pokemart_MapScripts::
	.byte 0


Littleroot_Mart_Employee::
# 6 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	lock
# 7 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	faceplayer
# 8 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	message Littleroot_Mart_Employee_Text_0
# 9 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	waitmessage
# 10 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	pokemart Littleroot_Mart
# 11 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	msgbox Littleroot_Mart_Employee_Text_1
# 12 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	release
	end


# 16 "data/maps/LittlerootTown_Pokemart/scripts.pory"

# 17 "data/maps/LittlerootTown_Pokemart/scripts.pory"
 
# 18 "data/maps/LittlerootTown_Pokemart/scripts.pory"
.align 2
# 19 "data/maps/LittlerootTown_Pokemart/scripts.pory"
Littleroot_Mart::
# 20 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	.2byte ITEM_MACH_BIKE
# 22 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 23 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 24 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	.2byte ITEM_NONE
# 25 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	release
# 26 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	end

Littleroot_Mart_Employee_Text_0:
# 8 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	.string "How may I serve you?$"

Littleroot_Mart_Employee_Text_1:
# 11 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	.string "Please Come Again.$"
