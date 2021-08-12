// savegame_bed.ysc @ L92467
int func_430()
{
  if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
  {
    return 0;
  }
  if (PED::IS_ANY_PED_SHOOTING_IN_AREA(Local_96.f_2 - Vector(10f, 10f, 10f), Local_96.f_2 + Vector(10f, 10f, 10f), false, true))
  {
    return 0;
  }
  if ((!func_51(Local_96) || func_16(0)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    return 0;
  }
  if (Global_96292 != -1)
  {
    if (MISC::IS_BIT_SET(Global_90158[Global_96292 /*34*/].f_15, 26))
    {
      return 0;
    }
  }
  if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && PED::IS_COP_PED_IN_AREA_3D(Local_96.f_2 - Vector(10f, 10f, 10f), Local_96.f_2 + Vector(10f, 10f, 10f))) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 3)
  {
    return 0;
  }
  return func_431(0);
}