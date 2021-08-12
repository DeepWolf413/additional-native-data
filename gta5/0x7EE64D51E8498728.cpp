// fm_bj_race_controler.ysc @ L322789
char* func_4513()
{
  struct<3> Var0;
  
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  }
  if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(Var0) == -289320599)
  {
    return "MP_MC_START_CITY";
  }
  if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(Var0) == 2072609373)
  {
    return "MP_MC_START_COUNTRY";
  }
  return "MP_MC_START";
}