// beat_slum_ambush.ysc @ L21746
int func_761(bool bParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar0 = 0;
  while (iVar0 <= 2)
  {
    if (func_43(iLocal_208[iVar0], 0, 0))
    {
      if (PED::IS_PED_IN_MELEE_COMBAT(iLocal_208[iVar0]) || !bParam0)
      {
        iVar2 = (iVar2 + func_760(iLocal_208[iVar0], 0));
        iVar1++;
      }
    }
    else
    {
      iVar1++;
    }
    iVar0++;
  }
  return (iVar2 / iVar1);
}