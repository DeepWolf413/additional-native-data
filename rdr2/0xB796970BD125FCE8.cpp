// abigail2_1.ysc @ L62819
int func_1671(int iParam0, int iParam1)
{
  int iVar0;

  iVar0 = func_180(*iParam0);
  if (ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
    {
      HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0);
      return 1;
    }
  }
  return 0;
}