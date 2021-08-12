// beat_animal_attack.ysc @ L10592
bool func_300(var uParam0, bool bParam1)
{
  *bParam1 = 0;
  if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
  {
    *bParam1 = 1;
  }
  else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
  {
    *uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
    return true;
  }
  return false;
}