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
	goto_if_set FLAG_SYS_POKEDEX_GET, NewLab_EventScript_Birch_14
NewLab_EventScript_Birch_13:
# 96 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_3, MSGBOX_NPC
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

NewLab_EventScript_Birch_12:
# 87 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_2, MSGBOX_YESNO
# 88 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Birch_17
# 92 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_3, MSGBOX_NPC
	goto NewLab_EventScript_Birch_1

NewLab_EventScript_Birch_14:
# 86 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewLab_EventScript_Birch_12
	goto NewLab_EventScript_Birch_13

NewLab_EventScript_Birch_17:
# 89 "data/maps/NewLab/scripts.pory"
	call UpgradeNationalDex
	goto NewLab_EventScript_Birch_1


StarterFade::
# 103 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 104 "data/maps/NewLab/scripts.pory"
	delay 20
# 105 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewLab_EventScript_PokeballOne::
# 110 "data/maps/NewLab/scripts.pory"
	lockall
# 111 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 112 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballOne_2
# 130 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballOne_1:
# 132 "data/maps/NewLab/scripts.pory"
	waitmessage
# 133 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballOne_2:
# 113 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballOne_5
# 118 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballOne_6
# 123 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballOne_7
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_5:
# 114 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 115 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 116 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_6:
# 119 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 120 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 121 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_7:
# 124 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 125 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 126 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballOne_1


NewLab_EventScript_PokeballTwo::
# 138 "data/maps/NewLab/scripts.pory"
	lockall
# 139 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 140 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballTwo_2
# 158 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballTwo_1:
# 160 "data/maps/NewLab/scripts.pory"
	waitmessage
# 161 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballTwo_2:
# 141 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballTwo_5
# 146 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballTwo_6
# 151 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballTwo_7
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_5:
# 142 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 143 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 144 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_6:
# 147 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 148 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 149 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_7:
# 152 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 153 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 154 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballTwo_1


NewLab_EventScript_PokeballThree::
# 166 "data/maps/NewLab/scripts.pory"
	lockall
# 167 "data/maps/NewLab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 168 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewLab_EventScript_PokeballThree_2
# 186 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballThree_1:
# 188 "data/maps/NewLab/scripts.pory"
	waitmessage
# 189 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballThree_2:
# 169 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 0
	goto_if_eq NewLab_EventScript_PokeballThree_5
# 174 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 1
	goto_if_eq NewLab_EventScript_PokeballThree_6
# 179 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER_REGION, 2
	goto_if_eq NewLab_EventScript_PokeballThree_7
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_5:
# 170 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 171 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 172 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_6:
# 175 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 176 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 177 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_7:
# 180 "data/maps/NewLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 181 "data/maps/NewLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 182 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_GiveStarter
	goto NewLab_EventScript_PokeballThree_1


NewLab_EventScript_GiveStarter::
# 194 "data/maps/NewLab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 195 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
# 196 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_GiveStarter_1
# 223 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 224 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_GiveStarter_1:
# 197 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 198 "data/maps/NewLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 2
# 199 "data/maps/NewLab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 10, ITEM_MASTER_BALL
# 200 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_GiveStarter_5
# 207 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_GiveStarter_6
# 216 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 217 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_3
NewLab_EventScript_GiveStarter_4:
# 219 "data/maps/NewLab/scripts.pory"
	closemessage
# 220 "data/maps/NewLab/scripts.pory"
	call InitiatePokedexSequence
	return

NewLab_EventScript_GiveStarter_5:
# 201 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 202 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_1
# 203 "data/maps/NewLab/scripts.pory"
	removeobject VAR_TEMP_0
# 204 "data/maps/NewLab/scripts.pory"
	call SetBallFlag
# 205 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	goto NewLab_EventScript_GiveStarter_4

NewLab_EventScript_GiveStarter_6:
# 208 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 209 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_1
# 210 "data/maps/NewLab/scripts.pory"
	removeobject VAR_TEMP_0
# 211 "data/maps/NewLab/scripts.pory"
	call SetBallFlag
# 212 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
# 213 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_GiveStarter_Text_2
	goto NewLab_EventScript_GiveStarter_4


SetBallFlag::
# 230 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SetBallFlag_2
# 234 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SetBallFlag_5
# 238 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SetBallFlag_7
	return

SetBallFlag_2:
# 231 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
	return

SetBallFlag_5:
# 235 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
	return

SetBallFlag_7:
# 239 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
	return


NicknamePartyMon::
# 245 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 246 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 247 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 248 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 249 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 256 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 257 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 258 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 261 "data/maps/NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 259 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


InitiatePokedexSequence::
# 269 "data/maps/NewLab/scripts.pory"
	lock
# 270 "data/maps/NewLab/scripts.pory"
	delay 20
# 271 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TurnToProf
# 272 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq InitiatePokedexSequence_2
InitiatePokedexSequence_1:
# 275 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq InitiatePokedexSequence_5
InitiatePokedexSequence_4:
# 278 "data/maps/NewLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq InitiatePokedexSequence_8
InitiatePokedexSequence_7:
# 281 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 282 "data/maps/NewLab/scripts.pory"
	delay 20
# 283 "data/maps/NewLab/scripts.pory"
	call GivePokedex
# 284 "data/maps/NewLab/scripts.pory"
	release
	return

InitiatePokedexSequence_2:
# 273 "data/maps/NewLab/scripts.pory"
	applymovement 4, MoveBallOne
	goto InitiatePokedexSequence_1

InitiatePokedexSequence_5:
# 276 "data/maps/NewLab/scripts.pory"
	applymovement 4, MoveBallTwo
	goto InitiatePokedexSequence_4

InitiatePokedexSequence_8:
# 279 "data/maps/NewLab/scripts.pory"
	applymovement 4, MoveBallThree
	goto InitiatePokedexSequence_7


GivePokedex::
# 289 "data/maps/NewLab/scripts.pory"
	lock
# 290 "data/maps/NewLab/scripts.pory"
	msgbox TakePokedex, MSGBOX_DEFAULT
# 291 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 292 "data/maps/NewLab/scripts.pory"
	message GivePokedex_Text_0
# 293 "data/maps/NewLab/scripts.pory"
	waitfanfare
# 294 "data/maps/NewLab/scripts.pory"
	closemessage
# 295 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 296 "data/maps/NewLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 297 "data/maps/NewLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 298 "data/maps/NewLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 299 "data/maps/NewLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 300 "data/maps/NewLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 301 "data/maps/NewLab/scripts.pory"
	msgbox GivePokedex_Text_1, MSGBOX_DEFAULT
# 302 "data/maps/NewLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 303 "data/maps/NewLab/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_DEFAULT
# 304 "data/maps/NewLab/scripts.pory"
	waitmessage
# 305 "data/maps/NewLab/scripts.pory"
	release
	return


UpgradeNationalDex::
# 310 "data/maps/NewLab/scripts.pory"
	lock
# 311 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 312 "data/maps/NewLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 313 "data/maps/NewLab/scripts.pory"
	waitmessage
# 314 "data/maps/NewLab/scripts.pory"
	waitfanfare
# 315 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 316 "data/maps/NewLab/scripts.pory"
	special EnableNationalPokedex
# 317 "data/maps/NewLab/scripts.pory"
	closemessage
# 318 "data/maps/NewLab/scripts.pory"
	release
	return


# 322 "data/maps/NewLab/scripts.pory"
MoveBallOne:
# 323 "data/maps/NewLab/scripts.pory"
	walk_left
# 323 "data/maps/NewLab/scripts.pory"
	walk_left
	step_end

# 325 "data/maps/NewLab/scripts.pory"
MoveBallTwo:
# 326 "data/maps/NewLab/scripts.pory"
	walk_left
	step_end

# 328 "data/maps/NewLab/scripts.pory"
MoveBallThree:
# 329 "data/maps/NewLab/scripts.pory"
	face_left
	step_end

# 331 "data/maps/NewLab/scripts.pory"
TurnToProf:
# 332 "data/maps/NewLab/scripts.pory"
	face_right
	step_end

DontTouchThat::
# 342 "data/maps/NewLab/scripts.pory"
	lockall
# 343 "data/maps/NewLab/scripts.pory"
	msgbox DontTouchThat_Text_0
# 344 "data/maps/NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveAwayFromThere
# 345 "data/maps/NewLab/scripts.pory"
	waitmovement 0
# 346 "data/maps/NewLab/scripts.pory"
	releaseall
	return


# 349 "data/maps/NewLab/scripts.pory"
MoveAwayFromThere:
# 350 "data/maps/NewLab/scripts.pory"
	walk_left
# 350 "data/maps/NewLab/scripts.pory"
	walk_left
	step_end

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
# 87 "data/maps/NewLab/scripts.pory"
	.string "Do you want to upgrade to the National\n"
	.string "Dex?$"

NewLab_EventScript_Birch_Text_3:
# 92 "data/maps/NewLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewLab_EventScript_PokeballOne_Text_0:
# 130 "data/maps/NewLab/scripts.pory"
	.string "Don't Take Another$"

NewLab_EventScript_GiveStarter_Text_0:
# 195 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

NewLab_EventScript_GiveStarter_Text_1:
# 202 "data/maps/NewLab/scripts.pory"
	.string "Recieved {STR_VAR_1}$"

NewLab_EventScript_GiveStarter_Text_2:
# 213 "data/maps/NewLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

NewLab_EventScript_GiveStarter_Text_3:
# 217 "data/maps/NewLab/scripts.pory"
	.string "No More Room For Pokemon$"

NicknamePartyMon_Text_0:
# 245 "data/maps/NewLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 261 "data/maps/NewLab/scripts.pory"
	.string "Transferred to PC$"

GivePokedex_Text_0:
# 292 "data/maps/NewLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

GivePokedex_Text_1:
# 301 "data/maps/NewLab/scripts.pory"
	.string "Also take these with you$"

GivePokedex_Text_2:
# 303 "data/maps/NewLab/scripts.pory"
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can collect\l"
	.string "research for the Pokedex$"

DontTouchThat_Text_0:
# 343 "data/maps/NewLab/scripts.pory"
	.string "DONT TOUCH THAT$"

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
# 264 "data/maps/NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"

TakePokedex::
# 335 "data/maps/NewLab/scripts.pory"
	.string "Here, {PLAYER}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this POKéDEX.$"
