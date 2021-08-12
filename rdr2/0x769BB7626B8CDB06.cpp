// abigail2_1_intro.ysc @ L6562
void func_302(vector3 vParam0, int iParam3)
{
  int iVar0;
  int iVar1;
  vector3 vVar2;

  if (func_90(vParam0))
  {
    return;
  }
  iVar0 = 0;
  while (iVar0 < Global_1911670)
  {
    iVar1 = Global_1911670[iVar0];
    if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
    {
      vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
      if (func_470(vVar2, vParam0, 2f, 1))
      {
        if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
        {
          VOLUME::_0xFDFECC6EE4491E11(iVar1);
          Global_1911670[iVar0] = 0;
        }
      }
    }
    iVar0++;
  }
}