// pausemenu_multiplayer.ysc @ L15651
void func_435()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 16)
  {
    Global_961130.f_72[iVar0 /*69*/].f_67 = 0;
    iVar0++;
  }
  StringCopy(&(Global_961130.f_12), "", 64);
  HUD::_0xF06EBB91A81E09E3(false);
  MISC::CLEAR_BIT(&iLocal_1128, 8);
  func_1284(1);
  func_1284(2);
}