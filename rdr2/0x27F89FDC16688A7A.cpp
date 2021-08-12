// bounty1.ysc @ L63419
bool func_1688()
{
  if (func_424(Global_35, 0) && func_424(iLocal_111, 0))
  {
    if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), iLocal_111) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), iLocal_111, false)) || func_1949(iLocal_111, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0)) || func_1687(iLocal_111, 0, 0, 0))
    {
      return true;
    }
  }
  return false;
}