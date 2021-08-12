// abigail2_1.ysc @ L39837
int func_971(bool bParam0)
{
  if (func_20() == -1)
  {
    if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
    {
      return 5;
    }
    return 1;
  }
  if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
  {
    return 3;
  }
  return 2;
}