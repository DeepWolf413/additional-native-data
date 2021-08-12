// rcm_bh_camp_return.ysc @ L51996
int func_1689(int iParam0, bool bParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    return 0;
  }
  iVar0 = TASK::_0x640A602946A8C972(*iParam0);
  iVar1 = TASK::_0x849791EBBDBA0362(*iParam0);
  iVar2 = TASK::_0x01AF8A3729231A43(*iParam0);
  if (iVar2 <= 0)
  {
    if (bParam1)
    {
      if (iVar1 >= iVar0)
      {
        return 1;
      }
    }
    else if (iVar1 >= 1)
    {
      return 1;
    }
  }
  return 0;
}