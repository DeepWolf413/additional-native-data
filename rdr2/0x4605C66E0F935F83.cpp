// braithwaites1.ysc @ L61934
bool func_1400(var uParam0, float fParam1)
{
  if ((((((!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && !PED::IS_PED_AIMING_FROM_COVER(Global_35)) && !PED::IS_PED_SHOOTING(Global_35)) && !PED::IS_PED_RELOADING(Global_35))
  {
    if (!func_26(uParam0))
    {
      func_244(uParam0);
    }
    else if (func_1890(uParam0) >= fParam1)
    {
      return true;
    }
    else if (((fParam1 > 15f && func_1891(Global_35)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_1892(Global_35)))) && func_1890(uParam0) < (fParam1 - 15f))
    {
      func_551(uParam0, (fParam1 - 15f));
    }
  }
  else if (func_26(uParam0))
  {
    func_599(uParam0);
  }
  return false;
}