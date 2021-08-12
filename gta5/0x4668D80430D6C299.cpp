// am_casino_peds.ysc @ L175036
int func_1875(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
  int iVar0;
  
  iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return 0;
  }
  if (!func_1039(uParam0, iVar0, bParam2, bParam3))
  {
    return 0;
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
  {
    if (!func_1876(uParam0, bParam1))
    {
    }
    PED::FINALIZE_HEAD_BLEND(*uParam0);
  }
  return 1;
}