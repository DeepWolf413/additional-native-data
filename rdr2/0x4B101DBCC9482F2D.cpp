// shop_bait.ysc @ L22748
bool func_681(var uParam0)
{
  int iVar0;

  if (!func_68(uParam0->f_3) && uParam0->f_2 != 21)
  {
    if (func_85())
    {
      if (!func_3(uParam0->f_2, &iVar0))
      {
        return false;
      }
      if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        return false;
      }
      if (MISC::_0x4B101DBCC9482F2D(iVar0))
      {
        return false;
      }
    }
  }
  if (uParam0->f_2 == 19)
  {
    return true;
  }
  return false;
}