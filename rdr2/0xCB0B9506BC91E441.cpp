// beat_rat_infestation.ysc @ L3216
void func_96()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 16)
  {
    if (func_58(iLocal_98[iVar0], 0, 1) && iVar0 >= 2)
    {
      PED::SET_PED_CONFIG_FLAG(iLocal_98[iVar0], 301, true);
      PED::SET_PED_CONFIG_FLAG(iLocal_98[iVar0], 317, false);
      PLAYER::_0xCB0B9506BC91E441(iLocal_98[iVar0], 2);
      if (PED::GET_PED_CONFIG_FLAG(iLocal_98[iVar0], 317, true))
      {
      }
    }
    iVar0++;
  }
}