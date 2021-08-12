// maintransition.ysc @ L104064
void func_738(var uParam0)
{
  char* sVar0;
  int iVar1;
  char* sVar2;
  
  func_538(&(uParam0->f_366), &(uParam0->f_395), 0);
  sVar0 = "HUD_LEAVETIT";
  iVar1 = 0;
  sVar2 = "HUD_QUITSESS";
  iVar1 = "PM_QUIT_WARN11";
  if (MISC::GET_IS_AUTO_SAVE_OFF())
  {
    iVar1 = "PM_QUIT_WARN5";
  }
  if (func_739() == 0)
  {
    HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar2, 36, iVar1, false, -1, 0, 0, true, 0);
  }
}