NewLab_MapScripts::
# 2 "data/maps/NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewLab_EventScript_BallDefault
	.byte 0


NewLab_EventScript_BallDefault::
# 6 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 0
# 7 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 9 "data/maps/NewLab/scripts.pory"
	hideobjectat 5, MAP_NEW_LAB
	return


Start_StarterChoose_Sequence::
# 13 "data/maps/NewLab/scripts.pory"
	lock
# 14 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch
# 15 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 16 "data/maps/NewLab/scripts.pory"
	msgbox BeginAdventureText
# 17 "data/maps/NewLab/scripts.pory"
	waitmessage
# 18 "data/maps/NewLab/scripts.pory"
	closemessage
# 19 "data/maps/NewLab/scripts.pory"
	applymovement 4, ProfMove
# 20 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 21 "data/maps/NewLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 1
# 22 "data/maps/NewLab/scripts.pory"
	release
	return


Start_StarterChoose_Sequence2::
# 26 "data/maps/NewLab/scripts.pory"
	lock
# 27 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch2
# 28 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 29 "data/maps/NewLab/scripts.pory"
	goto Start_StarterChoose_Sequence
	return


# 32 "data/maps/NewLab/scripts.pory"
MeetBirch:
# 33 "data/maps/NewLab/scripts.pory"
	walk_up
# 33 "data/maps/NewLab/scripts.pory"
	walk_up
# 33 "data/maps/NewLab/scripts.pory"
	walk_up
	step_end

# 35 "data/maps/NewLab/scripts.pory"
MeetBirch2:
# 36 "data/maps/NewLab/scripts.pory"
	walk_left
	step_end

# 38 "data/maps/NewLab/scripts.pory"
ProfMove:
# 39 "data/maps/NewLab/scripts.pory"
	walk_right
# 39 "data/maps/NewLab/scripts.pory"
	walk_right
# 40 "data/maps/NewLab/scripts.pory"
	walk_up
# 41 "data/maps/NewLab/scripts.pory"
	face_down
	step_end

StopLeaving::
# 55 "data/maps/NewLab/scripts.pory"
	lockall
# 56 "data/maps/NewLab/scripts.pory"
	msgbox StopLeaving_Text_0
# 57 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DoNotLeave
# 58 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 59 "data/maps/NewLab/scripts.pory"
	releaseall
	return


# 61 "data/maps/NewLab/scripts.pory"
DoNotLeave:
# 62 "data/maps/NewLab/scripts.pory"
	walk_up
	step_end

NewLab_EventScript_Birch::
# 66 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_Birch_2
# 89 "data/maps/NewLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, NewLab_EventScript_Birch_14
NewLab_EventScript_Birch_13:
# 99 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_3, MSGBOX_NPC
NewLab_EventScript_Birch_1:
	end

NewLab_EventScript_Birch_2:
# 67 "data/maps/NewLab/scripts.pory"
	lock
# 68 "data/maps/NewLab/scripts.pory"
	faceplayer
# 69 "data/maps/NewLab/scripts.pory"
	message NewLab_EventScript_Birch_Text_0
# 70 "data/maps/NewLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 71 "data/maps/NewLab/scripts.pory"
	closemessage
# 72 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewLab_EventScript_Birch_6
# 76 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewLab_EventScript_Birch_7
# 80 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewLab_EventScript_Birch_8
NewLab_EventScript_Birch_5:
# 84 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_1
# 85 "data/maps/NewLab/scripts.pory"
	waitmessage
# 86 "data/maps/NewLab/scripts.pory"
	release
	goto NewLab_EventScript_Birch_1

NewLab_EventScript_Birch_6:
# 73 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 74 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 2
	goto NewLab_EventScript_Birch_5

NewLab_EventScript_Birch_7:
# 77 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 78 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 1
	goto NewLab_EventScript_Birch_5

NewLab_EventScript_Birch_8:
# 81 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 82 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER_REGION, 0
	goto NewLab_EventScript_Birch_5

NewLab_EventScript_Birch_12:
# 90 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_2, MSGBOX_YESNO
# 91 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Birch_17
# 95 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_3, MSGBOX_NPC
	goto NewLab_EventScript_Birch_1

NewLab_EventScript_Birch_14:
# 89 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewLab_EventScript_Birch_12
	goto NewLab_EventScript_Birch_13

NewLab_EventScript_Birch_17:
# 92 "data/maps/NewLab/scripts.pory"
	call UpgradeNationalDex
	goto NewLab_EventScript_Birch_1


StarterFade::
# 106 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/maps/NewLab/scripts.pory"
	delay 20
# 108 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewLab_EventScript_PokeballOne::
# 113 "data/maps/NewLab/scripts.pory"
	lockall
# 114 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 115 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballOne_2
# 133 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballOne_1:
# 135 "data/maps/NewLab/scripts.pory"
	waitmessage
# 136 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballOne_2:
# 116 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballOne_5
# 121 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballOne_6
# 126 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballOne_7
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_5:
# 117 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 118 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 119 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_6:
# 122 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 123 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 124 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_7:
# 127 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 128 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 129 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1


NewLab_EventScript_PokeballTwo::
# 141 "data/maps/NewLab/scripts.pory"
	lockall
# 142 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 143 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballTwo_2
# 161 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballTwo_1:
# 163 "data/maps/NewLab/scripts.pory"
	waitmessage
# 164 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballTwo_2:
# 144 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballTwo_5
# 149 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballTwo_6
# 154 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballTwo_7
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_5:
# 145 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 146 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 147 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_6:
# 150 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 151 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 152 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_7:
# 155 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 156 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 157 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1


NewLab_EventScript_PokeballThree::
# 169 "data/maps/NewLab/scripts.pory"
	lockall
# 170 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 171 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballThree_2
# 189 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballThree_1:
# 191 "data/maps/NewLab/scripts.pory"
	waitmessage
# 192 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballThree_2:
# 172 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballThree_5
# 177 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballThree_6
# 182 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballThree_7
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_5:
# 173 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 174 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 175 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_6:
# 178 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 179 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 180 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_7:
# 183 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 184 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 185 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1


NewLab_EventScript_GiveStarter::
# 197 "data/maps/NewLab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 198 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
# 199 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_GiveStarter_1
# 226 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 227 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_GiveStarter_1:
# 200 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 201 "data/maps/NewLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 2
# 202 "data/maps/NewLab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 10, ITEM_MASTER_BALL
# 203 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_GiveStarter_5
# 210 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_GiveStarter_6
# 219 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 220 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_3
NewLab_EventScript_GiveStarter_4:
# 222 "data/maps/NewLab/scripts.pory"
	closemessage
# 223 "data/maps/NewLab/scripts.pory"
	call InitiatePokedexSequenceAndRivalBattle
	return

NewLab_EventScript_GiveStarter_5:
# 204 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 205 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_1
# 206 "data/maps/NewLab/scripts.pory"
	removeobject VAR_TEMP_0
# 207 "data/maps/NewLab/scripts.pory"
	call SetBallFlag
# 208 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	goto NewLab_EventScript_GiveStarter_4

NewLab_EventScript_GiveStarter_6:
# 211 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 212 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_1
# 213 "data/maps/NewLab/scripts.pory"
	removeobject VAR_TEMP_0
# 214 "data/maps/NewLab/scripts.pory"
	call SetBallFlag
# 215 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
# 216 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_2
	goto NewLab_EventScript_GiveStarter_4


SetBallFlag::
# 233 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SetBallFlag_2
# 237 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SetBallFlag_5
# 241 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SetBallFlag_7
	return

SetBallFlag_2:
# 234 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
	return

SetBallFlag_5:
# 238 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
	return

SetBallFlag_7:
# 242 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
	return


NicknamePartyMon::
# 248 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 249 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 250 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 251 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 252 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 259 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 260 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 261 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 264 "data/maps/NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 262 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


InitiatePokedexSequenceAndRivalBattle::
# 272 "data/maps/NewLab/scripts.pory"
	lock
# 273 "data/maps/NewLab/scripts.pory"
	delay 20
# 274 "data/maps/NewLab/scripts.pory"
	showobjectat 5, MAP_NEW_LAB
# 275 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TurnToProf
# 276 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq InitiatePokedexSequenceAndRivalBattle_2
InitiatePokedexSequenceAndRivalBattle_1:
# 280 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq InitiatePokedexSequenceAndRivalBattle_5
InitiatePokedexSequenceAndRivalBattle_4:
# 284 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq InitiatePokedexSequenceAndRivalBattle_8
InitiatePokedexSequenceAndRivalBattle_7:
# 288 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 289 "data/maps/NewLab/scripts.pory"
	delay 20
# 290 "data/maps/NewLab/scripts.pory"
	call GivePokedex
# 291 "data/maps/NewLab/scripts.pory"
	addobject 5
# 292 "data/maps/NewLab/scripts.pory"
	call RivalBattleTrigger
# 293 "data/maps/NewLab/scripts.pory"
	release
	return

InitiatePokedexSequenceAndRivalBattle_2:
# 277 "data/maps/NewLab/scripts.pory"
	setobjectxy 5, 5, 11
# 278 "data/maps/NewLab/scripts.pory"
	applymovement 4, MoveBallOne
	goto InitiatePokedexSequenceAndRivalBattle_1

InitiatePokedexSequenceAndRivalBattle_5:
# 281 "data/maps/NewLab/scripts.pory"
	setobjectxy 5, 6, 11
# 282 "data/maps/NewLab/scripts.pory"
	applymovement 4, MoveBallTwo
	goto InitiatePokedexSequenceAndRivalBattle_4

InitiatePokedexSequenceAndRivalBattle_8:
# 285 "data/maps/NewLab/scripts.pory"
	setobjectxy 5, 7, 11
# 286 "data/maps/NewLab/scripts.pory"
	applymovement 4, MoveBallThree
	goto InitiatePokedexSequenceAndRivalBattle_7


GivePokedex::
# 298 "data/maps/NewLab/scripts.pory"
	lock
# 299 "data/maps/NewLab/scripts.pory"
	msgbox TakePokedex, MSGBOX_DEFAULT
# 300 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 301 "data/maps/NewLab/scripts.pory"
	message GivePokedex_Text_0
# 302 "data/maps/NewLab/scripts.pory"
	waitfanfare
# 303 "data/maps/NewLab/scripts.pory"
	closemessage
# 304 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 305 "data/maps/NewLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 306 "data/maps/NewLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 307 "data/maps/NewLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 308 "data/maps/NewLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 309 "data/maps/NewLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 310 "data/maps/NewLab/scripts.pory"
	msgbox GivePokedex_Text_1, MSGBOX_DEFAULT
# 311 "data/maps/NewLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 312 "data/maps/NewLab/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_DEFAULT
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
# 56 "data/maps/NewLab/scripts.pory"
	.string "You Need To Choose a Pokemon$"

NewLab_EventScript_Birch_Text_0:
# 69 "data/maps/NewLab/scripts.pory"
	.string "Would you like to see more?$"

NewLab_EventScript_Birch_Text_1:
# 84 "data/maps/NewLab/scripts.pory"
	.string "Choose wisely...$"

NewLab_EventScript_Birch_Text_2:
# 90 "data/maps/NewLab/scripts.pory"
	.string "Do you want to upgrade to the National\n"
	.string "Dex?$"

NewLab_EventScript_Birch_Text_3:
# 95 "data/maps/NewLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewLab_EventScript_PokeballOne_Text_0:
# 133 "data/maps/NewLab/scripts.pory"
	.string "Don't Take Another$"

NewLab_EventScript_GiveStarter_Text_0:
# 198 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

NewLab_EventScript_GiveStarter_Text_1:
# 205 "data/maps/NewLab/scripts.pory"
	.string "Recieved {STR_VAR_1}$"

NewLab_EventScript_GiveStarter_Text_2:
# 216 "data/maps/NewLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

NewLab_EventScript_GiveStarter_Text_3:
# 220 "data/maps/NewLab/scripts.pory"
	.string "No More Room For Pokemon$"

NicknamePartyMon_Text_0:
# 248 "data/maps/NewLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 264 "data/maps/NewLab/scripts.pory"
	.string "Transferred to PC$"

GivePokedex_Text_0:
# 301 "data/maps/NewLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

GivePokedex_Text_1:
# 310 "data/maps/NewLab/scripts.pory"
	.string "Also take these with you$"

GivePokedex_Text_2:
# 312 "data/maps/NewLab/scripts.pory"
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can collect\l"
	.string "research for the Pokedex$"

DontTouchThat_Text_0:
# 352 "data/maps/NewLab/scripts.pory"
	.string "DONT TOUCH THAT$"

RivalBattleOver_Text_0:
# 402 "data/maps/NewLab/scripts.pory"
	.string "Well that wasn't fun. I'll beat you next\n"
	.string "time.$"

BeginAdventureText::
# 44 "data/maps/NewLab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Birch:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is Prof Birch\n"
	.string "This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now Choose Wisely,\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to see more options\l"
	.string "come and talk to me.\n$"

NewLab_NotChosen::
# 267 "data/maps/NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"

TakePokedex::
# 344 "data/maps/NewLab/scripts.pory"
	.string "Here, {PLAYER}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this POKéDEX.$"

RivalIntro::
# 411 "data/maps/NewLab/scripts.pory"
	.string "We'll See if you have what it takes!$"
