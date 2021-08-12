// annesburg.ysc @ L9927
int func_370(int iParam0)
{
  int iVar0;

  if (!func_84(iParam0, &iVar0))
  {
    return 0;
  }
  if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
  {
    Global_1914319.f_18905[iParam0] = PED::_0x7CC2186C32D3540A(iVar0, PLAYER::PLAYER_ID());
    return Global_1914319.f_18905[iParam0];
  }
  return 0;
}