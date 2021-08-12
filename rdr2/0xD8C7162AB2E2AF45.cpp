// discoverable_alchemist_house.ysc @ L2718
void func_35(var uParam0)
{
  if (func_64() != -1)
  {
    return;
  }
  if (*uParam0 == -321841939)
  {
    if (func_80(uParam0->f_4) != 0)
    {
      if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
      {
        MAP::_0xD8C7162AB2E2AF45(func_80(uParam0->f_4));
      }
      func_32(*uParam0, 8);
    }
  }
  else
  {
    if (func_81(*uParam0, uParam0->f_4) != 0)
    {
      if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_81(*uParam0, uParam0->f_4)))
      {
        MAP::_0xD8C7162AB2E2AF45(func_81(*uParam0, uParam0->f_4));
      }
      func_32(*uParam0, 8);
    }
    func_82(uParam0);
  }
}