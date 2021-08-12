// native1_intro.ysc @ L6953
void func_308(var uParam0, var uParam1)
{
  int iVar0;
  int iVar1;

  if (ENTITY::IS_ENTITY_DEAD(*uParam1))
  {
    return;
  }
  iVar0 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(*uParam1);
  iVar1 = 0;
  while (iVar1 < *uParam0)
  {
    if (!func_390((uParam0[iVar1 /*17*/])->f_6) || func_518((uParam0[iVar1 /*17*/])->f_6) == 0)
    {
    }
    else
    {
      HUD::_UIPROMPT_REMOVE_GROUP(func_518((uParam0[iVar1 /*17*/])->f_6), iVar0);
    }
    iVar1++;
  }
}