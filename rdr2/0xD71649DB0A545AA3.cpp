// act_bankrobbery01.ysc @ L57929
bool func_1855(int iParam0, var uParam1)
{
  if (!func_1997(0))
  {
    return false;
  }
  if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
  {
    if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
    {
      return true;
    }
  }
  return false;
}