// cheat_ui.ysc @ L2704
void func_101(bool bParam0)
{
  MAP::SET_MINIMAP_HIDE_FOW(bParam0);
  if (bParam0)
  {
    MAP::_REVEAL_MINIMAP_FOW(0);
  }
  else
  {
    MAP::_RESET_MINIMAP_FOW(0);
  }
}