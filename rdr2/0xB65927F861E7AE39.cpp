// short_update.ysc @ L26626
bool func_771()
{
  if (func_232(Global_1935496.f_30) != joaat("CONSUMABLE"))
  {
    return true;
  }
  if (!func_2085())
  {
    return true;
  }
  if (PED::_0xB65927F861E7AE39(PLAYER::PLAYER_PED_ID(), 34))
  {
    return true;
  }
  func_89("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
  return false;
}