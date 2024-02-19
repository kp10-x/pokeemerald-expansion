NewLab_MapScripts::
# 2 "data/maps/NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewLab_EventScript_BallDefault
	.byte 0


NewLab_EventScript_BallDefault::
# 6 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 0
	return


Start_StarterChoose_Sequence::
# 10 "data/maps/NewLab/scripts.pory"
	lock
# 11 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch
# 12 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 13 "data/maps/NewLab/scripts.pory"
	msgbox BeginAdventureText
# 14 "data/maps/NewLab/scripts.pory"
	waitmessage
# 15 "data/maps/NewLab/scripts.pory"
	closemessage
# 16 "data/maps/NewLab/scripts.pory"
	applymovement 4, ProfMove
# 17 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 18 "data/maps/NewLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 1
# 19 "data/maps/NewLab/scripts.pory"
	release
	return


Start_StarterChoose_Sequence2::
# 23 "data/maps/NewLab/scripts.pory"
	lock
# 24 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch2
# 25 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 26 "data/maps/NewLab/scripts.pory"
	goto Start_StarterChoose_Sequence
	return


# 29 "data/maps/NewLab/scripts.pory"
MeetBirch:
# 30 "data/maps/NewLab/scripts.pory"
	walk_up
# 30 "data/maps/NewLab/scripts.pory"
	walk_up
# 30 "data/maps/NewLab/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/NewLab/scripts.pory"
MeetBirch2:
# 33 "data/maps/NewLab/scripts.pory"
	walk_left
	step_end

# 35 "data/maps/NewLab/scripts.pory"
ProfMove:
# 36 "data/maps/NewLab/scripts.pory"
	walk_right
# 36 "data/maps/NewLab/scripts.pory"
	walk_right
# 37 "data/maps/NewLab/scripts.pory"
	walk_up
# 38 "data/maps/NewLab/scripts.pory"
	face_down
	step_end

StopLeaving::
# 52 "data/maps/NewLab/scripts.pory"
	lockall
# 53 "data/maps/NewLab/scripts.pory"
	msgbox StopLeaving_Text_0
# 54 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DoNotLeave
# 55 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 56 "data/maps/NewLab/scripts.pory"
	releaseall
	return


# 58 "data/maps/NewLab/scripts.pory"
DoNotLeave:
# 59 "data/maps/NewLab/scripts.pory"
	walk_up
	step_end

NewLab_EventScript_Birch::
# 63 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_Birch_2
# 86 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_2, MSGBOX_NPC
NewLab_EventScript_Birch_1:
	end

NewLab_EventScript_Birch_2:
# 64 "data/maps/NewLab/scripts.pory"
	lock
# 65 "data/maps/NewLab/scripts.pory"
	faceplayer
# 66 "data/maps/NewLab/scripts.pory"
	message NewLab_EventScript_Birch_Text_0
# 67 "data/maps/NewLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 68 "data/maps/NewLab/scripts.pory"
	closemessage
# 69 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewLab_EventScript_Birch_6
# 73 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewLab_EventScript_Birch_7
# 77 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewLab_EventScript_Birch_8
NewLab_EventScript_Birch_5:
# 81 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_1
# 82 "data/maps/NewLab/scripts.pory"
	waitmessage
# 83 "data/maps/NewLab/scripts.pory"
	release
	goto NewLab_EventScript_Birch_1

NewLab_EventScript_Birch_6:
# 70 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 71 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 2
	goto NewLab_EventScript_Birch_5

NewLab_EventScript_Birch_7:
# 74 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 75 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 1
	goto NewLab_EventScript_Birch_5

NewLab_EventScript_Birch_8:
# 78 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 79 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 0
	goto NewLab_EventScript_Birch_5


StarterFade::
# 92 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/NewLab/scripts.pory"
	delay 20
# 94 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewLab_EventScript_PokeballOne::
# 99 "data/maps/NewLab/scripts.pory"
	lockall
# 100 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 101 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballOne_2
# 119 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballOne_1:
# 121 "data/maps/NewLab/scripts.pory"
	waitmessage
# 122 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballOne_2:
# 102 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballOne_5
# 107 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballOne_6
# 112 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballOne_7
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_5:
# 103 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 104 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 105 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_6:
# 108 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 109 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 110 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_7:
# 113 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 114 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 115 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1


NewLab_EventScript_PokeballTwo::
# 127 "data/maps/NewLab/scripts.pory"
	lockall
# 128 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 129 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballTwo_2
# 147 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballTwo_1:
# 149 "data/maps/NewLab/scripts.pory"
	waitmessage
# 150 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballTwo_2:
# 130 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballTwo_5
# 135 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballTwo_6
# 140 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballTwo_7
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_5:
# 131 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 132 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 133 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_6:
# 136 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 137 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 138 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_7:
# 141 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 142 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 143 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1


NewLab_EventScript_PokeballThree::
# 155 "data/maps/NewLab/scripts.pory"
	lockall
# 156 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 157 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballThree_2
# 175 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballThree_1:
# 177 "data/maps/NewLab/scripts.pory"
	waitmessage
# 178 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballThree_2:
# 158 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballThree_5
# 163 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballThree_6
# 168 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballThree_7
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_5:
# 159 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 160 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 161 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_6:
# 164 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 165 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 166 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_7:
# 169 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 170 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 171 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1


NewLab_EventScript_GiveStarter::
# 183 "data/maps/NewLab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 184 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
# 185 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_GiveStarter_1
# 210 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 211 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_GiveStarter_1:
# 186 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 187 "data/maps/NewLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 2
# 188 "data/maps/NewLab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 10, ITEM_MASTER_BALL
# 189 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_GiveStarter_4
# 196 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_GiveStarter_5
# 205 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 206 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_3
	return

NewLab_EventScript_GiveStarter_4:
# 190 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 191 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_1
# 192 "data/maps/NewLab/scripts.pory"
	removeobject VAR_TEMP_0
# 193 "data/maps/NewLab/scripts.pory"
	call SetBallFlag
# 194 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_GiveStarter_5:
# 197 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 198 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_1
# 199 "data/maps/NewLab/scripts.pory"
	removeobject VAR_TEMP_0
# 200 "data/maps/NewLab/scripts.pory"
	call SetBallFlag
# 201 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
# 202 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_2
	return


SetBallFlag::
# 217 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SetBallFlag_2
# 221 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SetBallFlag_5
# 225 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SetBallFlag_7
	return

SetBallFlag_2:
# 218 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
	return

SetBallFlag_5:
# 222 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
	return

SetBallFlag_7:
# 226 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
	return


NicknamePartyMon::
# 232 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 233 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 234 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 235 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 236 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 243 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 244 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 245 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 248 "data/maps/NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 246 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


StopLeaving_Text_0:
# 53 "data/maps/NewLab/scripts.pory"
	.string "You Need To Choose a Pokemon$"

NewLab_EventScript_Birch_Text_0:
# 66 "data/maps/NewLab/scripts.pory"
	.string "Would you like to see more?$"

NewLab_EventScript_Birch_Text_1:
# 81 "data/maps/NewLab/scripts.pory"
	.string "Choose wisely...$"

NewLab_EventScript_Birch_Text_2:
# 86 "data/maps/NewLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewLab_EventScript_PokeballOne_Text_0:
# 119 "data/maps/NewLab/scripts.pory"
	.string "Don't Take Another$"

NewLab_EventScript_GiveStarter_Text_0:
# 184 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

NewLab_EventScript_GiveStarter_Text_1:
# 191 "data/maps/NewLab/scripts.pory"
	.string "Recieved {STR_VAR_1}$"

NewLab_EventScript_GiveStarter_Text_2:
# 202 "data/maps/NewLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

NewLab_EventScript_GiveStarter_Text_3:
# 206 "data/maps/NewLab/scripts.pory"
	.string "No More Room For Pokemon$"

NicknamePartyMon_Text_0:
# 232 "data/maps/NewLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 248 "data/maps/NewLab/scripts.pory"
	.string "Transferred to PC$"

BeginAdventureText::
# 41 "data/maps/NewLab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Birch:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is Prof Birch\n"
	.string "This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now Choose Wisely,\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to see more options\l"
	.string "come and talk to me.\n$"

NewLab_NotChosen::
# 251 "data/maps/NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"
