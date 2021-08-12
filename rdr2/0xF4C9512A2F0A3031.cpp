// aberdeenpigfarm.ysc @ L3900
void func_155(int iParam0)
{
  int iVar0;

  if (iParam0 == -1)
  {
    return;
  }
  if (!func_149(Global_1310750.f_13321[iParam0 /*9*/]))
  {
    return;
  }
  iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
  PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
  Global_1310750[iVar0 /*111*/].f_48 = 0;
  func_203(iParam0);
  Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}