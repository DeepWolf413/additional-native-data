// av_bear_vs_wolves.ysc @ L2858
void func_66(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 <= 2)
  {
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
    {
      TASK::_0x2E1D6D87346BB7D2(uParam0->f_20[iVar0 /*14*/], Global_35, 0, 1);
    }
    iVar0++;
  }
}