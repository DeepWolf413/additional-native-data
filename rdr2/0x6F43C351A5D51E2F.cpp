// player_horse.ysc @ L2549
void func_62(int iParam0)
{
  int iVar0;

  iParam0 = func_87(iParam0);
  if (iParam0 == -1)
  {
    return;
  }
  if (iParam0 >= 7)
  {
    return;
  }
  if (!func_71(iParam0))
  {
    return;
  }
  iVar0 = func_88(iParam0);
  if (ENTITY::IS_ENTITY_DEAD(iVar0))
  {
  }
  if (PED::IS_PED_INJURED(iVar0))
  {
  }
  if (TASK::IS_PED_IN_WRITHE(iVar0))
  {
  }
  PED::_0x6F43C351A5D51E2F(iVar0, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
}