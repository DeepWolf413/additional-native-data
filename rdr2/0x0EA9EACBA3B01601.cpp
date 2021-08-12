// guama3.ysc @ L74673
bool func_1689(struct<19> Param0, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48)
{
  if (func_2154())
  {
  }
  if (((((((PED::_0x9D9473CB82D83A30(Param0, PLAYER::PLAYER_PED_ID(), 0) == 1 && !func_1678(Param0)) && !func_2155()) || ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(Param0, true, false), true) < 60f) && !func_2156(PLAYER::PLAYER_PED_ID()))) || func_1679(&Param0, &(Param0.f_18), 1, 0, 1)) || (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Param0) && !func_1678(Param0))) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Param0, true, false), 60f)) || (func_2154() && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(Param0, true, false), true) < 15f))
  {
    if ((PED::_0x9D9473CB82D83A30(Param0, PLAYER::PLAYER_PED_ID(), 0) == 1 && !func_1678(Param0)) && !func_2155())
    {
    }
    if (PED::_0x0EA9EACBA3B01601(PLAYER::PLAYER_PED_ID(), Param0, 1))
    {
    }
    if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Param0))
    {
    }
    return true;
  }
  return false;
}