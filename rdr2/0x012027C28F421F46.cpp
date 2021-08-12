// dominoes_sp.ysc @ L12256
bool func_354(int iParam0, var uParam1, int iParam2, var uParam3)
{
  if (*uParam3 < 0)
  {
    return false;
  }
  if (*uParam3 >= uParam1->f_149[iParam2 /*44*/].f_3)
  {
    return false;
  }
  if (!func_149(uParam1, iParam2))
  {
    return false;
  }
  if (!MINIGAME::_0x012027C28F421F46(uParam3, &(uParam1->f_149[iParam2 /*44*/].f_4)))
  {
    return false;
  }
  uParam1->f_1 = *uParam3;
  uParam1->f_149[iParam2 /*44*/].f_3 = uParam1->f_149[iParam2 /*44*/].f_4.f_39;
  if (!MINIGAME::_0x3F4FD4BED07AB8C4(&(uParam1->f_6)))
  {
    return false;
  }
  if (uParam1->f_6 > 0)
  {
    if ((iParam0 == -382896522 && (uParam1->f_6 % 3) == 0) || (iParam0 == -1234859967 && (uParam1->f_6 % 5) == 0))
    {
      uParam1->f_149[iParam2 /*44*/].f_2 = (uParam1->f_149[iParam2 /*44*/].f_2 + uParam1->f_6);
    }
  }
  return true;
}