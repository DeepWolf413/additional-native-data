// marston7.ysc @ L73311
bool func_2006(bool bParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar0 = 0;
  while (iVar0 < 117)
  {
    iVar1 = func_2414(iVar0, 1);
    if (iVar1 != 0)
    {
      iVar2 = WEAPON::_0xDBC4B552B2AE9A83(Global_35, iVar1);
      if (func_663(iVar2) && WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar2, 0, bParam0))
      {
        if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar2))
        {
          return true;
        }
      }
    }
    iVar0++;
  }
  return false;
}