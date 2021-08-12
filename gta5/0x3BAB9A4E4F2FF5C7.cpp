// maintransition.ysc @ L150197
void func_1740(var uParam0)
{
  var uVar0;
  var uVar1;
  int iVar2;
  
  func_1739();
  if (HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_PAUSE_MENU_RESTARTING())
  {
    if (HUD::IS_FRONTEND_READY_FOR_CONTROL() || func_1254(0))
    {
      if (HUD::_0x2E22FEFA0100275E() || func_1254(0))
      {
        if (!func_1254(0))
        {
          HUD::_GET_PAUSE_MENU_SELECTION_DATA(&uVar1, &iVar2, &uVar0);
        }
        if (iVar2 == 71 || func_1254(0))
        {
          func_1572(0);
          uParam0->f_504 = 79 + 1000;
          func_1789(5);
        }
      }
    }
  }
}