// short_update.ysc @ L48113
bool func_1512()
{
  int iVar0;
  int iVar1;

  iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
  if (PED::IS_PED_ON_MOUNT(iVar0))
  {
    iVar1 = PED::GET_MOUNT(iVar0);
    return (!PED::IS_PED_SWIMMING(iVar1) && !PED::IS_PED_SWIMMING_UNDER_WATER(iVar1));
  }
  else
  {
    return (!PED::IS_PED_SWIMMING(iVar0) && !PED::IS_PED_SWIMMING_UNDER_WATER(iVar0));
  }
  return false;
}