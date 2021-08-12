// abigail2_1.ysc @ L14782
void func_60(bool bParam0)
{
  Global_1956584 = bParam0;
  if (bParam0)
  {
    MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(false, 0);
  }
  else
  {
    MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(true, 0);
  }
}