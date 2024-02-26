NewLab_MapScripts::
# 2 "data/maps/NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewLab_EventScript_BallDefault
	.byte 0


NewLab_EventScript_BallDefault::
# 6 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 0
# 7 "data/maps/NewLab/scripts.pory"
	removeobject 5
# 8 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Start_StarterChoose_Sequence::
# 12 "data/maps/NewLab/scripts.pory"
	lock
# 13 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch
# 14 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 15 "data/maps/NewLab/scripts.pory"
	msgbox BeginAdventureText
# 16 "data/maps/NewLab/scripts.pory"
	waitmessage
# 17 "data/maps/NewLab/scripts.pory"
	closemessage
# 18 "data/maps/NewLab/scripts.pory"
	applymovement 4, ProfMove
# 19 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 20 "data/maps/NewLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 1
# 21 "data/maps/NewLab/scripts.pory"
	release
	return


Start_StarterChoose_Sequence2::
# 25 "data/maps/NewLab/scripts.pory"
	lock
# 26 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch2
# 27 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 28 "data/maps/NewLab/scripts.pory"
	goto Start_StarterChoose_Sequence
	return


# 31 "data/maps/NewLab/scripts.pory"
MeetBirch:
# 32 "data/maps/NewLab/scripts.pory"
	walk_up
# 32 "data/maps/NewLab/scripts.pory"
	walk_up
# 32 "data/maps/NewLab/scripts.pory"
	walk_up
	step_end

# 34 "data/maps/NewLab/scripts.pory"
MeetBirch2:
# 35 "data/maps/NewLab/scripts.pory"
	walk_left
	step_end

# 37 "data/maps/NewLab/scripts.pory"
ProfMove:
# 38 "data/maps/NewLab/scripts.pory"
	walk_right
# 38 "data/maps/NewLab/scripts.pory"
	walk_right
# 39 "data/maps/NewLab/scripts.pory"
	walk_up
# 40 "data/maps/NewLab/scripts.pory"
	face_down
	step_end

StopLeaving::
# 54 "data/maps/NewLab/scripts.pory"
	lockall
# 55 "data/maps/NewLab/scripts.pory"
	msgbox StopLeaving_Text_0
# 56 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DoNotLeave
# 57 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 58 "data/maps/NewLab/scripts.pory"
	releaseall
	return


# 60 "data/maps/NewLab/scripts.pory"
DoNotLeave:
# 61 "data/maps/NewLab/scripts.pory"
	walk_up
	step_end

NewLab_EventScript_Birch::
# 65 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_Birch_2
# 88 "data/maps/NewLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, NewLab_EventScript_Birch_14
NewLab_EventScript_Birch_13:
# 98 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_3, MSGBOX_NPC
NewLab_EventScript_Birch_1:
	end

NewLab_EventScript_Birch_2:
# 66 "data/maps/NewLab/scripts.pory"
	lock
# 67 "data/maps/NewLab/scripts.pory"
	faceplayer
# 68 "data/maps/NewLab/scripts.pory"
	message NewLab_EventScript_Birch_Text_0
# 69 "data/maps/NewLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 70 "data/maps/NewLab/scripts.pory"
	closemessage
# 71 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewLab_EventScript_Birch_6
# 75 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewLab_EventScript_Birch_7
# 79 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewLab_EventScript_Birch_8
NewLab_EventScript_Birch_5:
# 83 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_1
# 84 "data/maps/NewLab/scripts.pory"
	waitmessage
# 85 "data/maps/NewLab/scripts.pory"
	release
	goto NewLab_EventScript_Birch_1

NewLab_EventScript_Birch_6:
# 72 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 73 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 2
	goto NewLab_EventScript_Birch_5

NewLab_EventScript_Birch_7:
# 76 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 77 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 1
	goto NewLab_EventScript_Birch_5

NewLab_EventScript_Birch_8:
# 80 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 81 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 0
	goto NewLab_EventScript_Birch_5

NewLab_EventScript_Birch_12:
# 89 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_2, MSGBOX_YESNO
# 90 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Birch_17
# 94 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_3, MSGBOX_NPC
	goto NewLab_EventScript_Birch_1

NewLab_EventScript_Birch_14:
# 88 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewLab_EventScript_Birch_12
	goto NewLab_EventScript_Birch_13

NewLab_EventScript_Birch_17:
# 91 "data/maps/NewLab/scripts.pory"
	call UpgradeNationalDex
	goto NewLab_EventScript_Birch_1


StarterFade::
# 105 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/maps/NewLab/scripts.pory"
	delay 20
# 107 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewLab_EventScript_PokeballOne::
# 112 "data/maps/NewLab/scripts.pory"
	lockall
# 113 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 114 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballOne_2
# 132 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballOne_1:
# 134 "data/maps/NewLab/scripts.pory"
	waitmessage
# 135 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballOne_2:
# 115 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballOne_5
# 120 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballOne_6
# 125 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballOne_7
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_5:
# 116 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 117 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 118 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_6:
# 121 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 122 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 123 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_7:
# 126 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 127 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 128 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1


NewLab_EventScript_PokeballTwo::
# 140 "data/maps/NewLab/scripts.pory"
	lockall
# 141 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 142 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballTwo_2
# 160 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballTwo_1:
# 162 "data/maps/NewLab/scripts.pory"
	waitmessage
# 163 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballTwo_2:
# 143 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballTwo_5
# 148 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballTwo_6
# 153 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballTwo_7
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_5:
# 144 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 145 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 146 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_6:
# 149 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 150 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 151 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_7:
# 154 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 155 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 156 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1


NewLab_EventScript_PokeballThree::
# 168 "data/maps/NewLab/scripts.pory"
	lockall
# 169 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 170 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballThree_2
# 188 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballThree_1:
# 190 "data/maps/NewLab/scripts.pory"
	waitmessage
# 191 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballThree_2:
# 171 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballThree_5
# 176 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballThree_6
# 181 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballThree_7
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_5:
# 172 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 173 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 174 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_6:
# 177 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 178 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 179 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_7:
# 182 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 183 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 184 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1


NewLab_EventScript_GiveStarter::
# 196 "data/maps/NewLab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 197 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
# 198 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_GiveStarter_1
# 225 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 226 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_GiveStarter_1:
# 199 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 200 "data/maps/NewLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 2
# 201 "data/maps/NewLab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 10, ITEM_MASTER_BALL
# 202 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_GiveStarter_5
# 209 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_GiveStarter_6
# 218 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 219 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_3
NewLab_EventScript_GiveStarter_4:
# 221 "data/maps/NewLab/scripts.pory"
	closemessage
# 222 "data/maps/NewLab/scripts.pory"
	call InitiatePokedexSequenceAndRivalBattle
	return

NewLab_EventScript_GiveStarter_5:
# 203 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 204 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_1
# 205 "data/maps/NewLab/scripts.pory"
	removeobject VAR_TEMP_0
# 206 "data/maps/NewLab/scripts.pory"
	call SetBallFlag
# 207 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	goto NewLab_EventScript_GiveStarter_4

NewLab_EventScript_GiveStarter_6:
# 210 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 211 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_1
# 212 "data/maps/NewLab/scripts.pory"
	removeobject VAR_TEMP_0
# 213 "data/maps/NewLab/scripts.pory"
	call SetBallFlag
# 214 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
# 215 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_2
	goto NewLab_EventScript_GiveStarter_4


SetBallFlag::
# 232 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SetBallFlag_2
# 236 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SetBallFlag_5
# 240 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SetBallFlag_7
	return

SetBallFlag_2:
# 233 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
	return

SetBallFlag_5:
# 237 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
	return

SetBallFlag_7:
# 241 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
	return


NicknamePartyMon::
# 247 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 248 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 249 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 250 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 251 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 258 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 259 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 260 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 263 "data/maps/NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 261 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


InitiatePokedexSequenceAndRivalBattle::
# 271 "data/maps/NewLab/scripts.pory"
	lock
# 272 "data/maps/NewLab/scripts.pory"
	delay 20
# 273 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TurnToProf
# 274 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq InitiatePokedexSequenceAndRivalBattle_2
InitiatePokedexSequenceAndRivalBattle_1:
# 278 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq InitiatePokedexSequenceAndRivalBattle_5
InitiatePokedexSequenceAndRivalBattle_4:
# 282 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq InitiatePokedexSequenceAndRivalBattle_8
InitiatePokedexSequenceAndRivalBattle_7:
# 286 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 287 "data/maps/NewLab/scripts.pory"
	delay 20
# 288 "data/maps/NewLab/scripts.pory"
	call GivePokedex
# 289 "data/maps/NewLab/scripts.pory"
	addobject 5
# 290 "data/maps/NewLab/scripts.pory"
	call RivalBattleTrigger
# 291 "data/maps/NewLab/scripts.pory"
	release
	return

InitiatePokedexSequenceAndRivalBattle_2:
# 275 "data/maps/NewLab/scripts.pory"
	setobjectxy 5, 5, 11
# 276 "data/maps/NewLab/scripts.pory"
	applymovement 4, MoveBallOne
	goto InitiatePokedexSequenceAndRivalBattle_1

InitiatePokedexSequenceAndRivalBattle_5:
# 279 "data/maps/NewLab/scripts.pory"
	setobjectxy 5, 6, 11
# 280 "data/maps/NewLab/scripts.pory"
	applymovement 4, MoveBallTwo
	goto InitiatePokedexSequenceAndRivalBattle_4

InitiatePokedexSequenceAndRivalBattle_8:
# 283 "data/maps/NewLab/scripts.pory"
	setobjectxy 5, 7, 11
# 284 "data/maps/NewLab/scripts.pory"
	applymovement 4, MoveBallThree
	goto InitiatePokedexSequenceAndRivalBattle_7


GivePokedex::
# 296 "data/maps/NewLab/scripts.pory"
	lock
# 297 "data/maps/NewLab/scripts.pory"
	msgbox TakePokedex, MSGBOX_DEFAULT
# 298 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 299 "data/maps/NewLab/scripts.pory"
	message GivePokedex_Text_0
# 300 "data/maps/NewLab/scripts.pory"
	waitfanfare
# 301 "data/maps/NewLab/scripts.pory"
	closemessage
# 302 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 303 "data/maps/NewLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 304 "data/maps/NewLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 305 "data/maps/NewLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 306 "data/maps/NewLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 307 "data/maps/NewLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 308 "data/maps/NewLab/scripts.pory"
	msgbox GivePokedex_Text_1, MSGBOX_DEFAULT
# 309 "data/maps/NewLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 310 "data/maps/NewLab/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_DEFAULT
# 311 "data/maps/NewLab/scripts.pory"
	msgbox GivePokedex_Text_3
# 312 "data/maps/NewLab/scripts.pory"
	giveitem ITEM_POKE_VIAL
# 313 "data/maps/NewLab/scripts.pory"
	waitmessage
# 314 "data/maps/NewLab/scripts.pory"
	release
	return


UpgradeNationalDex::
# 319 "data/maps/NewLab/scripts.pory"
	lock
# 320 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 321 "data/maps/NewLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 322 "data/maps/NewLab/scripts.pory"
	waitmessage
# 323 "data/maps/NewLab/scripts.pory"
	waitfanfare
# 324 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 325 "data/maps/NewLab/scripts.pory"
	special EnableNationalPokedex
# 326 "data/maps/NewLab/scripts.pory"
	closemessage
# 327 "data/maps/NewLab/scripts.pory"
	release
	return


# 331 "data/maps/NewLab/scripts.pory"
MoveBallOne:
# 332 "data/maps/NewLab/scripts.pory"
	walk_left
# 332 "data/maps/NewLab/scripts.pory"
	walk_left
	step_end

# 334 "data/maps/NewLab/scripts.pory"
MoveBallTwo:
# 335 "data/maps/NewLab/scripts.pory"
	walk_left
	step_end

# 337 "data/maps/NewLab/scripts.pory"
MoveBallThree:
# 338 "data/maps/NewLab/scripts.pory"
	face_left
	step_end

# 340 "data/maps/NewLab/scripts.pory"
TurnToProf:
# 341 "data/maps/NewLab/scripts.pory"
	face_right
	step_end

DontTouchThat::
# 351 "data/maps/NewLab/scripts.pory"
	lockall
# 352 "data/maps/NewLab/scripts.pory"
	msgbox DontTouchThat_Text_0
# 353 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveAwayFromThere
# 354 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 355 "data/maps/NewLab/scripts.pory"
	releaseall
	return


# 358 "data/maps/NewLab/scripts.pory"
MoveAwayFromThere:
# 359 "data/maps/NewLab/scripts.pory"
	walk_left
# 359 "data/maps/NewLab/scripts.pory"
	walk_left
	step_end

RivalBattleTrigger::
# 365 "data/maps/NewLab/scripts.pory"
	checkplayergender
# 366 "data/maps/NewLab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, MayBattle
# 367 "data/maps/NewLab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BrendanBattle
	return


MayBattle::
# 371 "data/maps/NewLab/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 372 "data/maps/NewLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 373 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 374 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 375 "data/maps/NewLab/scripts.pory"
	applymovement 5, RivalMoveUp
# 376 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 377 "data/maps/NewLab/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, RivalIntro, Route103_Text_MayDefeated, RivalBattleOver
	end


BrendanBattle::
# 382 "data/maps/NewLab/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 383 "data/maps/NewLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 384 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 385 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 386 "data/maps/NewLab/scripts.pory"
	applymovement 5, RivalMoveUp
# 387 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 388 "data/maps/NewLab/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, RivalIntro, Route103_Text_BrendanDefeated, RivalBattleOver
	end


# 392 "data/maps/NewLab/scripts.pory"
RivalMoveUp:
# 393 "data/maps/NewLab/scripts.pory"
	walk_up
# 393 "data/maps/NewLab/scripts.pory"
	walk_up
# 393 "data/maps/NewLab/scripts.pory"
	walk_up
# 393 "data/maps/NewLab/scripts.pory"
	walk_up
	step_end

# 396 "data/maps/NewLab/scripts.pory"
RivalLeave:
# 397 "data/maps/NewLab/scripts.pory"
	walk_down
# 397 "data/maps/NewLab/scripts.pory"
	walk_down
# 397 "data/maps/NewLab/scripts.pory"
	walk_down
# 397 "data/maps/NewLab/scripts.pory"
	walk_down
# 397 "data/maps/NewLab/scripts.pory"
	walk_down
	step_end

RivalBattleOver::
# 401 "data/maps/NewLab/scripts.pory"
	lockall
# 402 "data/maps/NewLab/scripts.pory"
	msgbox RivalBattleOver_Text_0
# 403 "data/maps/NewLab/scripts.pory"
	applymovement 5, RivalLeave
# 404 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 405 "data/maps/NewLab/scripts.pory"
	setflag RIVAL_STARTER_BATTLE
# 406 "data/maps/NewLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 3
# 407 "data/maps/NewLab/scripts.pory"
	removeobject 5
# 408 "data/maps/NewLab/scripts.pory"
	releaseall
	return


StopLeaving_Text_0:
# 55 "data/maps/NewLab/scripts.pory"
	.string "You Need To Choose a Pokemon$"

NewLab_EventScript_Birch_Text_0:
# 68 "data/maps/NewLab/scripts.pory"
	.string "Would you like to see more?$"

NewLab_EventScript_Birch_Text_1:
# 83 "data/maps/NewLab/scripts.pory"
	.string "Choose wisely...$"

NewLab_EventScript_Birch_Text_2:
# 89 "data/maps/NewLab/scripts.pory"
	.string "Do you want to upgrade to the National\n"
	.string "Dex?$"

NewLab_EventScript_Birch_Text_3:
# 94 "data/maps/NewLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewLab_EventScript_PokeballOne_Text_0:
# 132 "data/maps/NewLab/scripts.pory"
	.string "Don't Take Another$"

NewLab_EventScript_GiveStarter_Text_0:
# 197 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

NewLab_EventScript_GiveStarter_Text_1:
# 204 "data/maps/NewLab/scripts.pory"
	.string "Recieved {STR_VAR_1}$"

NewLab_EventScript_GiveStarter_Text_2:
# 215 "data/maps/NewLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

NewLab_EventScript_GiveStarter_Text_3:
# 219 "data/maps/NewLab/scripts.pory"
	.string "No More Room For Pokemon$"

NicknamePartyMon_Text_0:
# 247 "data/maps/NewLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 263 "data/maps/NewLab/scripts.pory"
	.string "Transferred to PC$"

GivePokedex_Text_0:
# 299 "data/maps/NewLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

GivePokedex_Text_1:
# 308 "data/maps/NewLab/scripts.pory"
	.string "Also take these with you$"

GivePokedex_Text_2:
# 310 "data/maps/NewLab/scripts.pory"
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can collect\l"
	.string "research for the Pokedex$"

GivePokedex_Text_3:
# 311 "data/maps/NewLab/scripts.pory"
	.string "Take this brand new item as well and see\n"
	.string "the magic for yourself!$"

DontTouchThat_Text_0:
# 352 "data/maps/NewLab/scripts.pory"
	.string "DONT TOUCH THAT$"

RivalBattleOver_Text_0:
# 402 "data/maps/NewLab/scripts.pory"
	.string "Well that wasn't fun. I'll beat you next\n"
	.string "time.$"

BeginAdventureText::
# 43 "data/maps/NewLab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Birch:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is Prof Birch\n"
	.string "This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now Choose Wisely,\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to see more options\l"
	.string "come and talk to me.\n$"

NewLab_NotChosen::
# 266 "data/maps/NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"

TakePokedex::
# 344 "data/maps/NewLab/scripts.pory"
	.string "Here, {PLAYER}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this POKéDEX.$"

RivalIntro::
# 411 "data/maps/NewLab/scripts.pory"
	.string "We'll See if you have what it takes!$"
