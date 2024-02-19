LittlerootTown_Pokecenter_MapScripts::
# 2 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Littleroot_PokemonCenter_OnTransition
# 3 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Littleroot_PokemonCenter_OnTransition::
# 7 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
	end


Pokecenter_Nurse::
# 13 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	waitmessage
# 16 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	waitbuttonpress
# 17 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	release
	end


Pokecenter_Healer::
# 23 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	lock
# 24 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	faceplayer
# 25 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	msgbox Pokecenter_Healer_Text_0, MSGBOX_YESNO
# 26 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokecenter_Healer_1
# 35 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	msgbox Pokecenter_Healer_Text_2, MSGBOX_NPC
	return

Pokecenter_Healer_1:
# 27 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 28 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	msgbox Pokecenter_Healer_Text_1
# 30 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	waitmessage
# 31 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	release
	end


Pokecenter_Healer_Text_0:
# 25 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	.string "Would you like me to heal your party?$"

Pokecenter_Healer_Text_1:
# 29 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	.string "Come again soon.$"

Pokecenter_Healer_Text_2:
# 35 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	.string "Have a nice day$"
