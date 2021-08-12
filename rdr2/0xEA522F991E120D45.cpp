// hideout_sixpointcabin.ysc @ L15752
bool func_565()
{
  int iVar0;
  var uVar1;
  bool bVar2;

  uVar1 = func_652(Global_35, 0);
  bVar2 = (WEAPON::_0x5809DBCA0A37C82B(uVar1) && WEAPON::_0xEA522F991E120D45(uVar1));
  if (Local_29.f_183 == 2 && !bVar2)
  {
    return true;
  }
  iVar0 = 0;
  while (iVar0 < Local_29.f_199)
  {
    if (!bVar2)
    {
      if (func_205(Local_286[iVar0 /*9*/].f_5, 0, 1))
      {
        if (PED::_0x09D7AFD3716DA8E1(Local_286[iVar0 /*9*/].f_5, 3000))
        {
          return true;
        }
      }
    }
    iVar0++;
  }
  return false;
}