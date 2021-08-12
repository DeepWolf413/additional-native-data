// beat_fleeing_family.ysc @ L7892
bool func_216(int iParam0, int iParam1)
{
  switch (iLocal_328)
  {
    case 0:
      if (PED::_0xA0BC8FAED8CFEB3C(iParam0))
      {
        iLocal_328++;
      }
      break;
    case 1:
      PED::_0xFFA1594703ED27CA(iParam0, iParam1);
      iLocal_328++;
      break;
    case 2:
      if (PED::_0xA0BC8FAED8CFEB3C(iParam0))
      {
        iLocal_328++;
        return true;
      }
      break;
    case 3:
      return true;
  }
  return false;
}