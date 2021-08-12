// mudtown3.ysc @ L81244
void func_2166(int iParam0, bool bParam1)
{
  bool bVar0;

  func_2420(iParam0, 0, 0);
  if (func_1621(iParam0))
  {
    OBJECT::_0x1BC47A9DEDC8DF5D(iParam0, !bParam1);
  }
  bVar0 = true;
  if (func_1621(iParam0))
  {
    if ((OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0 && OBJECT::_0x8433E1954BE323FC(iParam0) >= 1f) && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0) <= 0.0001f)
    {
      bVar0 = false;
    }
  }
  if (bVar0)
  {
    func_2602(iParam0, 0, 0f, 0, 1, 1f, 0, 0);
  }
}