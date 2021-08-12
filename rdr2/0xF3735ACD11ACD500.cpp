// fishing_core.ysc @ L1827
void func_10(var uParam0, var uParam1)
{
  int iVar0;

  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < func_31(uParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(func_53(uParam1, iVar0)) && func_68(uParam1, iVar0))
    {
      Global_1900073.f_147[iVar0] = TASK::_0xF3735ACD11ACD500(func_53(uParam1, iVar0), &(Global_1900073.f_26[iVar0 /*30*/]));
    }
    else
    {
      Global_1900073.f_26[iVar0 /*30*/] = 1;
      Global_1900073.f_147[iVar0] = 0;
    }
    iVar0++;
  }
}