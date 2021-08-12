// ambush_exc_lookout_attack.ysc @ L4219
void func_171()
{
  int iVar0;
  bool bVar1;

  iVar0 = 0;
  while (iVar0 <= 4)
  {
    if (func_61(Local_15[iVar0], 0, 0))
    {
      if (!bVar1)
      {
        func_277(Local_15[iVar0], Global_35, "GANG_TAUNT_GEN", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
        bVar1 = true;
      }
      PED::_0x1854217C640B39EC(Local_15[iVar0], Global_35, 0f, 0f, 0f, 12f, 0, 0);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 51, true);
      PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
    }
    iVar0++;
  }
}