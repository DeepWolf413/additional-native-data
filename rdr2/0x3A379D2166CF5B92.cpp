// bounty1.ysc @ L63623
void func_1694(bool bParam0, bool bParam1, bool bParam2)
{
  if (bParam2)
  {
    WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
    TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
  }
  if (!bParam0)
  {
    ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_46, "bQuickExit", bParam1, false);
    ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_46, "iSelection", func_2153(), false);
  }
  func_1205(0);
  func_1270();
  func_11(&iLocal_221, 1, 1);
  UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
}