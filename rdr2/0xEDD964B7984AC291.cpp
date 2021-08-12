// act_bankrobbery01.ysc @ L35961
int func_1033(int iParam0, int iParam1, int iParam2, bool bParam3)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
  {
    return 0;
  }
  iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
  if (!MAP::DOES_BLIP_EXIST(iVar0))
  {
    iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, iParam0);
  }
  else
  {
    MAP::_BLIP_SET_STYLE(iVar0, iParam1);
  }
  if (bParam3)
  {
    if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
    {
      MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
    }
  }
  return iVar0;
}