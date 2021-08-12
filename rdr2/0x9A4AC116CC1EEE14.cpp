// campfire_always.ysc @ L11870
void func_289(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < uParam0->f_103)
  {
    if (func_56(uParam0->f_16[iVar0], 0, 0))
    {
      if (PED::IS_PED_HUMAN(uParam0->f_16[iVar0]))
      {
        PED::_0x9A4AC116CC1EEE14(uParam0->f_16[iVar0]);
      }
    }
    iVar0++;
  }
}