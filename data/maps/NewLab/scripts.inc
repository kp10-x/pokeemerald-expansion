NewLab_MapScripts::
# 2 "data/maps/NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewLab_EventScript_BallDefault
	.byte 0


NewLab_EventScript_BallDefault::
# 6 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER, 0
	return


NewLab_EventScript_Birch::
# 10 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewLab_EventScript_Birch_4
NewLab_EventScript_Birch_3:
# 33 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_2
NewLab_EventScript_Birch_1:
	end

NewLab_EventScript_Birch_2:
# 11 "data/maps/NewLab/scripts.pory"
	lock
# 12 "data/maps/NewLab/scripts.pory"
	faceplayer
# 13 "data/maps/NewLab/scripts.pory"
	message NewLab_EventScript_Birch_Text_0
# 14 "data/maps/NewLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 15 "data/maps/NewLab/scripts.pory"
	closemessage
# 16 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewLab_EventScript_Birch_10
# 20 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewLab_EventScript_Birch_11
# 24 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewLab_EventScript_Birch_12
NewLab_EventScript_Birch_9:
# 28 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_1
# 29 "data/maps/NewLab/scripts.pory"
	waitmessage
# 30 "data/maps/NewLab/scripts.pory"
	release
	goto NewLab_EventScript_Birch_1

NewLab_EventScript_Birch_4:
# 10 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewLab_EventScript_Birch_6
	goto NewLab_EventScript_Birch_3

NewLab_EventScript_Birch_6:
# 10 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewLab_EventScript_Birch_2
	goto NewLab_EventScript_Birch_3

NewLab_EventScript_Birch_10:
# 17 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 18 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER, 2
	goto NewLab_EventScript_Birch_9

NewLab_EventScript_Birch_11:
# 21 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 22 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER, 1
	goto NewLab_EventScript_Birch_9

NewLab_EventScript_Birch_12:
# 25 "data/maps/NewLab/scripts.pory"
	call StarterFade
# 26 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER, 0
	goto NewLab_EventScript_Birch_9


StarterFade::
# 39 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 40 "data/maps/NewLab/scripts.pory"
	delay 20
# 41 "data/maps/NewLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewLab_EventScript_PokeballOne::
# 46 "data/maps/NewLab/scripts.pory"
	lockall
# 47 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewLab_EventScript_PokeballOne_4
NewLab_EventScript_PokeballOne_3:
# 59 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballOne_1:
# 61 "data/maps/NewLab/scripts.pory"
	waitmessage
# 62 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballOne_2:
# 48 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 0
	goto_if_eq NewLab_EventScript_PokeballOne_9
# 51 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 1
	goto_if_eq NewLab_EventScript_PokeballOne_10
# 54 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 2
	goto_if_eq NewLab_EventScript_PokeballOne_11
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_4:
# 47 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewLab_EventScript_PokeballOne_6
	goto NewLab_EventScript_PokeballOne_3

NewLab_EventScript_PokeballOne_6:
# 47 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewLab_EventScript_PokeballOne_2
	goto NewLab_EventScript_PokeballOne_3

NewLab_EventScript_PokeballOne_9:
# 49 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Mudkip
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_10:
# 52 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Totodile
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_11:
# 55 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Squirtle
	goto NewLab_EventScript_PokeballOne_1


NewLab_EventScript_PokeballTwo::
# 67 "data/maps/NewLab/scripts.pory"
	lockall
# 68 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewLab_EventScript_PokeballTwo_4
NewLab_EventScript_PokeballTwo_3:
# 80 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballTwo_1:
# 82 "data/maps/NewLab/scripts.pory"
	waitmessage
# 83 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballTwo_2:
# 69 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 0
	goto_if_eq NewLab_EventScript_PokeballTwo_9
# 72 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 1
	goto_if_eq NewLab_EventScript_PokeballTwo_10
# 75 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 2
	goto_if_eq NewLab_EventScript_PokeballTwo_11
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_4:
# 68 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewLab_EventScript_PokeballTwo_6
	goto NewLab_EventScript_PokeballTwo_3

NewLab_EventScript_PokeballTwo_6:
# 68 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewLab_EventScript_PokeballTwo_2
	goto NewLab_EventScript_PokeballTwo_3

NewLab_EventScript_PokeballTwo_9:
# 70 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Treecko
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_10:
# 73 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Chikorita
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_11:
# 76 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Bulbasaur
	goto NewLab_EventScript_PokeballTwo_1


NewLab_EventScript_PokeballThree::
# 88 "data/maps/NewLab/scripts.pory"
	lockall
# 89 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewLab_EventScript_PokeballThree_4
NewLab_EventScript_PokeballThree_3:
# 101 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballThree_1:
# 103 "data/maps/NewLab/scripts.pory"
	waitmessage
# 104 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballThree_2:
# 90 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 0
	goto_if_eq NewLab_EventScript_PokeballThree_9
# 93 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 1
	goto_if_eq NewLab_EventScript_PokeballThree_10
# 96 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 2
	goto_if_eq NewLab_EventScript_PokeballThree_11
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_4:
# 89 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewLab_EventScript_PokeballThree_6
	goto NewLab_EventScript_PokeballThree_3

NewLab_EventScript_PokeballThree_6:
# 89 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewLab_EventScript_PokeballThree_2
	goto NewLab_EventScript_PokeballThree_3

NewLab_EventScript_PokeballThree_9:
# 91 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Torchic
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_10:
# 94 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Cyndaquil
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_11:
# 97 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Charmander
	goto NewLab_EventScript_PokeballThree_1


NewLab_EventScript_Mudkip::
# 110 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 111 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 112 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Mudkip_1
# 136 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 137 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Mudkip_1:
# 113 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_MUDKIP, 15, ITEM_MASTER_BALL
# 114 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Mudkip_4
# 122 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Mudkip_5
# 131 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 132 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Mudkip_4:
# 115 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_1
# 117 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 118 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 119 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 120 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Mudkip_5:
# 123 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_1
# 125 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 126 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 127 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 128 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Totodile::
# 143 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 144 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 145 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Totodile_1
# 169 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 170 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Totodile_1:
# 146 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_TOTODILE, 15, ITEM_MASTER_BALL
# 147 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Totodile_4
# 155 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Totodile_5
# 164 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 165 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Totodile_4:
# 148 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 149 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Totodile_Text_1
# 150 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 151 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 152 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 153 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Totodile_5:
# 156 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 157 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Totodile_Text_1
# 158 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 159 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 160 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 161 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Squirtle::
# 176 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 177 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 178 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Squirtle_1
# 202 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 203 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Squirtle_1:
# 179 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 15, ITEM_MASTER_BALL
# 180 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Squirtle_4
# 188 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Squirtle_5
# 197 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 198 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Squirtle_4:
# 181 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 182 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Squirtle_Text_1
# 183 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 184 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 185 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 186 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Squirtle_5:
# 189 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 190 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Squirtle_Text_1
# 191 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 192 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 193 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 194 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Treecko::
# 209 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 210 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 211 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Treecko_1
# 235 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 236 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Treecko_1:
# 212 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_TREECKO, 15, ITEM_MASTER_BALL
# 213 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Treecko_4
# 221 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Treecko_5
# 230 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 231 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Treecko_4:
# 214 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 215 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Treecko_Text_1
# 216 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 217 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 218 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 219 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Treecko_5:
# 222 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 223 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Treecko_Text_1
# 224 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 225 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 226 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 227 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Chikorita::
# 242 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 243 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 244 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Chikorita_1
# 268 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 269 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Chikorita_1:
# 245 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 15, ITEM_MASTER_BALL
# 246 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Chikorita_4
# 254 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Chikorita_5
# 263 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 264 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Chikorita_4:
# 247 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 248 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Chikorita_Text_1
# 249 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 250 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 251 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 252 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Chikorita_5:
# 255 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 256 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Chikorita_Text_1
# 257 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 258 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 259 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 260 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Bulbasaur::
# 275 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 276 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 277 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Bulbasaur_1
# 301 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 302 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Bulbasaur_1:
# 278 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 15, ITEM_MASTER_BALL
# 279 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Bulbasaur_4
# 287 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Bulbasaur_5
# 296 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 297 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Bulbasaur_4:
# 280 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 281 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Bulbasaur_Text_1
# 282 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 283 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 284 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 285 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Bulbasaur_5:
# 288 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 289 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Bulbasaur_Text_1
# 290 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 291 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 292 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 293 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Torchic::
# 308 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 309 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 310 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Torchic_1
# 334 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 335 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Torchic_1:
# 311 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_TORCHIC, 15, ITEM_MASTER_BALL
# 312 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Torchic_4
# 320 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Torchic_5
# 329 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 330 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Torchic_4:
# 313 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 314 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Torchic_Text_1
# 315 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 316 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 317 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 318 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Torchic_5:
# 321 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 322 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Torchic_Text_1
# 323 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 324 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 325 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 326 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Cyndaquil::
# 341 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 342 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 343 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Cyndaquil_1
# 367 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 368 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Cyndaquil_1:
# 344 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 15, ITEM_MASTER_BALL
# 345 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Cyndaquil_4
# 353 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Cyndaquil_5
# 362 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 363 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Cyndaquil_4:
# 346 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 347 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Cyndaquil_Text_1
# 348 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 349 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 350 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 351 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Cyndaquil_5:
# 354 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 355 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Cyndaquil_Text_1
# 356 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 357 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 358 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 359 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Charmander::
# 374 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 375 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 376 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Charmander_1
# 400 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 401 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Charmander_1:
# 377 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 15, ITEM_MASTER_BALL
# 378 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Charmander_4
# 386 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Charmander_5
# 395 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 396 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Charmander_4:
# 379 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Charmander_Text_1
# 381 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 382 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 383 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 384 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Charmander_5:
# 387 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 388 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Charmander_Text_1
# 389 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 390 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 391 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 392 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 408 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 409 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 410 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 411 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 412 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 419 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 420 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 421 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 424 "data/maps/NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 422 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewLab_EventScript_Birch_Text_0:
# 13 "data/maps/NewLab/scripts.pory"
	.string "Would you like to see more?$"

NewLab_EventScript_Birch_Text_1:
# 28 "data/maps/NewLab/scripts.pory"
	.string "Choose wisely...$"

NewLab_EventScript_Birch_Text_2:
# 33 "data/maps/NewLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewLab_EventScript_PokeballOne_Text_0:
# 59 "data/maps/NewLab/scripts.pory"
	.string "Don't Take Another$"

NewLab_EventScript_Mudkip_Text_0:
# 111 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewLab_EventScript_Mudkip_Text_1:
# 116 "data/maps/NewLab/scripts.pory"
	.string "Recieved Mudkip$"

NewLab_EventScript_Mudkip_Text_2:
# 132 "data/maps/NewLab/scripts.pory"
	.string "No More Room$"

NewLab_EventScript_Totodile_Text_0:
# 144 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewLab_EventScript_Totodile_Text_1:
# 149 "data/maps/NewLab/scripts.pory"
	.string "Recieved Totodile$"

NewLab_EventScript_Squirtle_Text_0:
# 177 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewLab_EventScript_Squirtle_Text_1:
# 182 "data/maps/NewLab/scripts.pory"
	.string "Recieved Squirtle$"

NewLab_EventScript_Treecko_Text_0:
# 210 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewLab_EventScript_Treecko_Text_1:
# 215 "data/maps/NewLab/scripts.pory"
	.string "Recieved Treecko$"

NewLab_EventScript_Chikorita_Text_0:
# 243 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewLab_EventScript_Chikorita_Text_1:
# 248 "data/maps/NewLab/scripts.pory"
	.string "Recieved Chikorita$"

NewLab_EventScript_Bulbasaur_Text_0:
# 276 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewLab_EventScript_Bulbasaur_Text_1:
# 281 "data/maps/NewLab/scripts.pory"
	.string "Recieved Bulbasaur$"

NewLab_EventScript_Torchic_Text_0:
# 309 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewLab_EventScript_Torchic_Text_1:
# 314 "data/maps/NewLab/scripts.pory"
	.string "Recieved Torchic$"

NewLab_EventScript_Cyndaquil_Text_0:
# 342 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewLab_EventScript_Cyndaquil_Text_1:
# 347 "data/maps/NewLab/scripts.pory"
	.string "Recieved Cyndaquil$"

NewLab_EventScript_Charmander_Text_0:
# 375 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewLab_EventScript_Charmander_Text_1:
# 380 "data/maps/NewLab/scripts.pory"
	.string "Recieved Charmander$"

NicknamePartyMon_Text_0:
# 408 "data/maps/NewLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 424 "data/maps/NewLab/scripts.pory"
	.string "Transferred to PC$"

NewLab_NotChosen::
# 427 "data/maps/NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"
