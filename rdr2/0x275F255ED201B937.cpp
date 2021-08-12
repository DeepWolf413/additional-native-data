// act_caunc_rustling.ysc @ L57884
bool func_1577(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
  int iVar0;

  iVar0 = 0;
  if (func_1843(16))
  {
    return Global_1935630.f_58 == iParam0;
  }
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
  {
    if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
    {
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        if (ENTITY::IS_ENTITY_A_PED(iVar0))
        {
          func_1844(16);
          Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
          if (Global_1935630.f_58 == iParam0)
          {
            return true;
          }
        }
      }
    }
  }
  return false;
}