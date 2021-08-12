// sp_menuped.ysc @ L85288
int func_310()
{
  int iVar0;
  int iVar1;
  var uVar2;
  
  HUD::GET_MENU_PED_INT_STAT(joaat("fl_co_arm1"), &iVar0);
  HUD::GET_MENU_PED_INT_STAT(joaat("fl_co_arm2"), &iVar1);
  if (iVar0 == 2 && iVar1 == 0)
  {
    return 1;
  }
  HUD::GET_MENU_PED_BOOL_STAT(joaat("clo_stored_initial"), &uVar2);
  return 0;
}