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
	lockall
# 11 "data/maps/NewLab/scripts.pory"
	faceplayer
# 12 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewLab_EventScript_Birch_4
NewLab_EventScript_Birch_3:
# 28 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_2
NewLab_EventScript_Birch_1:
# 30 "data/maps/NewLab/scripts.pory"
	waitmessage
# 31 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_Birch_2:
# 13 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_0, MSGBOX_YESNO
# 14 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Birch_9
# 24 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_1
	goto NewLab_EventScript_Birch_1

NewLab_EventScript_Birch_4:
# 12 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewLab_EventScript_Birch_6
	goto NewLab_EventScript_Birch_3

NewLab_EventScript_Birch_6:
# 12 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewLab_EventScript_Birch_2
	goto NewLab_EventScript_Birch_3

NewLab_EventScript_Birch_9:
# 15 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 2
	goto_if_ne NewLab_EventScript_Birch_13
# 19 "data/maps/NewLab/scripts.pory"
	setvar VAR_SELECT_STARTER, 0
NewLab_EventScript_Birch_12:
# 21 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Birch_Text_1
	goto NewLab_EventScript_Birch_1

NewLab_EventScript_Birch_13:
# 16 "data/maps/NewLab/scripts.pory"
	addvar VAR_SELECT_STARTER, 1
	goto NewLab_EventScript_Birch_12


NewLab_EventScript_PokeballOne::
# 36 "data/maps/NewLab/scripts.pory"
	lockall
# 37 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewLab_EventScript_PokeballOne_4
NewLab_EventScript_PokeballOne_3:
# 49 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballOne_1:
# 51 "data/maps/NewLab/scripts.pory"
	waitmessage
# 52 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballOne_2:
# 38 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 0
	goto_if_eq NewLab_EventScript_PokeballOne_9
# 41 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 1
	goto_if_eq NewLab_EventScript_PokeballOne_10
# 44 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 2
	goto_if_eq NewLab_EventScript_PokeballOne_11
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_4:
# 37 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewLab_EventScript_PokeballOne_6
	goto NewLab_EventScript_PokeballOne_3

NewLab_EventScript_PokeballOne_6:
# 37 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewLab_EventScript_PokeballOne_2
	goto NewLab_EventScript_PokeballOne_3

NewLab_EventScript_PokeballOne_9:
# 39 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Mudkip
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_10:
# 42 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Totodile
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_11:
# 45 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Squirtle
	goto NewLab_EventScript_PokeballOne_1


NewLab_EventScript_PokeballTwo::
# 57 "data/maps/NewLab/scripts.pory"
	lockall
# 58 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewLab_EventScript_PokeballTwo_4
NewLab_EventScript_PokeballTwo_3:
# 70 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballTwo_1:
# 72 "data/maps/NewLab/scripts.pory"
	waitmessage
# 73 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballTwo_2:
# 59 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 0
	goto_if_eq NewLab_EventScript_PokeballTwo_9
# 62 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 1
	goto_if_eq NewLab_EventScript_PokeballTwo_10
# 65 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 2
	goto_if_eq NewLab_EventScript_PokeballTwo_11
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_4:
# 58 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewLab_EventScript_PokeballTwo_6
	goto NewLab_EventScript_PokeballTwo_3

NewLab_EventScript_PokeballTwo_6:
# 58 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewLab_EventScript_PokeballTwo_2
	goto NewLab_EventScript_PokeballTwo_3

NewLab_EventScript_PokeballTwo_9:
# 60 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Treecko
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_10:
# 63 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Chikorita
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_11:
# 66 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Bulbasaur
	goto NewLab_EventScript_PokeballTwo_1


NewLab_EventScript_PokeballThree::
# 78 "data/maps/NewLab/scripts.pory"
	lockall
# 79 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewLab_EventScript_PokeballThree_4
NewLab_EventScript_PokeballThree_3:
# 91 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0
NewLab_EventScript_PokeballThree_1:
# 93 "data/maps/NewLab/scripts.pory"
	waitmessage
# 94 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballThree_2:
# 80 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 0
	goto_if_eq NewLab_EventScript_PokeballThree_9
# 83 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 1
	goto_if_eq NewLab_EventScript_PokeballThree_10
# 86 "data/maps/NewLab/scripts.pory"
	compare VAR_SELECT_STARTER, 2
	goto_if_eq NewLab_EventScript_PokeballThree_11
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_4:
# 79 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewLab_EventScript_PokeballThree_6
	goto NewLab_EventScript_PokeballThree_3

NewLab_EventScript_PokeballThree_6:
# 79 "data/maps/NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewLab_EventScript_PokeballThree_2
	goto NewLab_EventScript_PokeballThree_3

NewLab_EventScript_PokeballThree_9:
# 81 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Torchic
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_10:
# 84 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Cyndaquil
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_11:
# 87 "data/maps/NewLab/scripts.pory"
	call NewLab_EventScript_Charmander
	goto NewLab_EventScript_PokeballThree_1


NewLab_EventScript_Mudkip::
# 100 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 101 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 102 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Mudkip_1
# 126 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 127 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Mudkip_1:
# 103 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_MUDKIP, 10, ITEM_MASTER_BALL
# 104 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Mudkip_4
# 112 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Mudkip_5
# 121 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 122 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Mudkip_4:
# 105 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_1
# 107 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 108 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 109 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 110 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Mudkip_5:
# 113 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_1
# 115 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 116 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 117 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 118 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Totodile::
# 133 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 134 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 135 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Totodile_1
# 159 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 160 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Totodile_1:
# 136 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_MASTER_BALL
# 137 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Totodile_4
# 145 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Totodile_5
# 154 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 155 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Totodile_4:
# 138 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Totodile_Text_1
# 140 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 141 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 142 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 143 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Totodile_5:
# 146 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Totodile_Text_1
# 148 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 149 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 150 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 151 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Squirtle::
# 166 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 167 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 168 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Squirtle_1
# 192 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 193 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Squirtle_1:
# 169 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 10, ITEM_MASTER_BALL
# 170 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Squirtle_4
# 178 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Squirtle_5
# 187 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 188 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Squirtle_4:
# 171 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 172 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Squirtle_Text_1
# 173 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 174 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 175 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 176 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Squirtle_5:
# 179 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 180 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Squirtle_Text_1
# 181 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 182 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 183 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 184 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Treecko::
# 199 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 200 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 201 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Treecko_1
# 225 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 226 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Treecko_1:
# 202 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_TREECKO, 10, ITEM_MASTER_BALL
# 203 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Treecko_4
# 211 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Treecko_5
# 220 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 221 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Treecko_4:
# 204 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 205 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Treecko_Text_1
# 206 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 207 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 208 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 209 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Treecko_5:
# 212 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 213 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Treecko_Text_1
# 214 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 215 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 216 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 217 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Chikorita::
# 232 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 233 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 234 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Chikorita_1
# 258 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 259 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Chikorita_1:
# 235 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 10, ITEM_MASTER_BALL
# 236 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Chikorita_4
# 244 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Chikorita_5
# 253 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 254 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Chikorita_4:
# 237 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 238 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Chikorita_Text_1
# 239 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 240 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 241 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 242 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Chikorita_5:
# 245 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Chikorita_Text_1
# 247 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 248 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 249 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 250 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Bulbasaur::
# 265 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 266 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 267 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Bulbasaur_1
# 291 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 292 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Bulbasaur_1:
# 268 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 10, ITEM_MASTER_BALL
# 269 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Bulbasaur_4
# 277 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Bulbasaur_5
# 286 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 287 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Bulbasaur_4:
# 270 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 271 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Bulbasaur_Text_1
# 272 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 273 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 274 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 275 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Bulbasaur_5:
# 278 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 279 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Bulbasaur_Text_1
# 280 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 281 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 282 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 283 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Torchic::
# 298 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 299 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 300 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Torchic_1
# 324 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 325 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Torchic_1:
# 301 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_TORCHIC, 10, ITEM_MASTER_BALL
# 302 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Torchic_4
# 310 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Torchic_5
# 319 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 320 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Torchic_4:
# 303 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 304 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Torchic_Text_1
# 305 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 306 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 307 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 308 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Torchic_5:
# 311 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 312 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Torchic_Text_1
# 313 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 314 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 315 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 316 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Cyndaquil::
# 331 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 332 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 333 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Cyndaquil_1
# 357 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 358 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Cyndaquil_1:
# 334 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 10, ITEM_MASTER_BALL
# 335 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Cyndaquil_4
# 343 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Cyndaquil_5
# 352 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 353 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Cyndaquil_4:
# 336 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 337 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Cyndaquil_Text_1
# 338 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 339 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 340 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 341 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Cyndaquil_5:
# 344 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 345 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Cyndaquil_Text_1
# 346 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 347 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 348 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 349 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NewLab_EventScript_Charmander::
# 364 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 365 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 366 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_Charmander_1
# 390 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 391 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

NewLab_EventScript_Charmander_1:
# 367 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 10, ITEM_MASTER_BALL
# 368 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_Charmander_4
# 376 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_Charmander_5
# 385 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 386 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Mudkip_Text_2
	return

NewLab_EventScript_Charmander_4:
# 369 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 370 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Charmander_Text_1
# 371 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 372 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 373 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 374 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	return

NewLab_EventScript_Charmander_5:
# 377 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 378 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_Charmander_Text_1
# 379 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 380 "data/maps/NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 381 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 382 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 398 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 399 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 400 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 401 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 402 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 409 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 410 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 411 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 414 "data/maps/NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 412 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewLab_EventScript_Birch_Text_0:
# 13 "data/maps/NewLab/scripts.pory"
	.string "Hello, would you like to see more?$"

NewLab_EventScript_Birch_Text_1:
# 21 "data/maps/NewLab/scripts.pory"
	.string "Choose your Pokemon wisely$"

NewLab_EventScript_Birch_Text_2:
# 28 "data/maps/NewLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewLab_EventScript_PokeballOne_Text_0:
# 49 "data/maps/NewLab/scripts.pory"
	.string "Don't Take Another$"

NewLab_EventScript_Mudkip_Text_0:
# 101 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewLab_EventScript_Mudkip_Text_1:
# 106 "data/maps/NewLab/scripts.pory"
	.string "Recieved Mudkip$"

NewLab_EventScript_Mudkip_Text_2:
# 122 "data/maps/NewLab/scripts.pory"
	.string "No More Room$"

NewLab_EventScript_Totodile_Text_0:
# 134 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewLab_EventScript_Totodile_Text_1:
# 139 "data/maps/NewLab/scripts.pory"
	.string "Recieved Totodile$"

NewLab_EventScript_Squirtle_Text_0:
# 167 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewLab_EventScript_Squirtle_Text_1:
# 172 "data/maps/NewLab/scripts.pory"
	.string "Recieved Squirtle$"

NewLab_EventScript_Treecko_Text_0:
# 200 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewLab_EventScript_Treecko_Text_1:
# 205 "data/maps/NewLab/scripts.pory"
	.string "Recieved Treecko$"

NewLab_EventScript_Chikorita_Text_0:
# 233 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewLab_EventScript_Chikorita_Text_1:
# 238 "data/maps/NewLab/scripts.pory"
	.string "Recieved Chikorita$"

NewLab_EventScript_Bulbasaur_Text_0:
# 266 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewLab_EventScript_Bulbasaur_Text_1:
# 271 "data/maps/NewLab/scripts.pory"
	.string "Recieved Bulbasaur$"

NewLab_EventScript_Torchic_Text_0:
# 299 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewLab_EventScript_Torchic_Text_1:
# 304 "data/maps/NewLab/scripts.pory"
	.string "Recieved Torchic$"

NewLab_EventScript_Cyndaquil_Text_0:
# 332 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewLab_EventScript_Cyndaquil_Text_1:
# 337 "data/maps/NewLab/scripts.pory"
	.string "Recieved Cyndaquil$"

NewLab_EventScript_Charmander_Text_0:
# 365 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewLab_EventScript_Charmander_Text_1:
# 370 "data/maps/NewLab/scripts.pory"
	.string "Recieved Charmander$"

NicknamePartyMon_Text_0:
# 398 "data/maps/NewLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 414 "data/maps/NewLab/scripts.pory"
	.string "Transferred to PC$"

NewLab_NotChosen::
# 417 "data/maps/NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"
