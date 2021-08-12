// act_bankrobbery01.ysc @ L57109
bool func_1834(var uParam0, int iParam1)
{
  if (func_1967(uParam0))
  {
    return true;
  }
  if (PED::_0x29FCE825613FEFCA(iParam1, 400))
  {
    return true;
  }
  if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
  {
    return false;
  }
  if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
  {
    return false;
  }
  if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
  {
    return false;
  }
  if (PED::_GET_LASSO_TARGET(Global_35) != 0)
  {
    return true;
  }
  if (!PED::IS_PED_RAGDOLL(iParam1))
  {
    return true;
  }
  return false;
}