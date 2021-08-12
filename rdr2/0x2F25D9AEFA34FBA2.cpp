// beat_animal_attack.ysc @ L2178
void func_48(int iParam0, int iParam1, bool bParam2)
{
  int iVar0;
  int iVar1;

  iVar0 = 2;
  while (iVar0 <= 5)
  {
    if (func_40(uLocal_1389[iVar0], 0, 1))
    {
      if (func_40(iParam0, 0, 0))
      {
        if (!func_40(iParam1, 0, 0) || (iVar1 % 2) == 0)
        {
          func_152(iParam0, iVar0, bParam2);
          PED::REGISTER_TARGET(uLocal_1389[iVar0], iParam0, 1);
          PED::_0xD05AD61F242C626B(iParam0, 1f);
          func_167(uLocal_1389[iVar0], iParam0);
        }
        else
        {
          func_152(iParam1, iVar0, bParam2);
          PED::REGISTER_TARGET(uLocal_1389[iVar0], iParam1, 1);
          PED::_0xD05AD61F242C626B(iParam1, 1f);
          func_167(uLocal_1389[iVar0], iParam1);
        }
      }
      iVar1++;
    }
    iVar0++;
  }
}