// abigail2_1.ysc @ L79654
bool func_2337(int iParam0, var uParam1)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return true;
  }
  if (uParam1->f_1 == 0)
  {
    return false;
  }
  iVar0 = 0;
  while (iVar0 < uParam1->f_134)
  {
    if (!PED::_0xB0B2C6D170B0E8E5(uParam1->f_135[iVar0 /*2*/]))
    {
      return false;
    }
    iVar0++;
  }
  return PED::_0xA0BC8FAED8CFEB3C(iParam0);
}