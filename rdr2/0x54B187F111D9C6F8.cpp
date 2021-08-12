// camp_beaverhollow.ysc @ L5324
bool func_172(int iParam0)
{
  if (func_519())
  {
    return false;
  }
  if (AUDIO::_0x54B187F111D9C6F8(Global_35, 0))
  {
    return false;
  }
  if (func_335(func_178(Global_1357549.f_1659[iParam0]), 0))
  {
    if (PED::_0x9337183FDA2E9035(func_178(Global_1357549.f_1659[iParam0]), PLAYER::PLAYER_ID()) || PED::_0xA454D234E45BB6E5(func_178(Global_1357549.f_1659[iParam0]), PLAYER::PLAYER_ID()))
    {
      return false;
    }
  }
  else
  {
    return false;
  }
  if (func_180())
  {
    return false;
  }
  return true;
}