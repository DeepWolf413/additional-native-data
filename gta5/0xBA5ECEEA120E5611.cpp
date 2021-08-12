// building_controller.ysc @ L9025
void func_88(bool bParam0)
{
  int iVar0;
  int iVar1;
  
  if (!bParam0 == Global_37775)
  {
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 263)
    {
      MISC::SET_BIT(&(Global_31724[iVar0 /*23*/].f_11), 18);
      iVar0++;
    }
    if (Global_31721 == 1)
    {
      Global_31722 = 1;
    }
    Global_31721 = 1;
  }
  Global_37775 = bParam0;
  HUD::SET_MINIMAP_IN_PROLOGUE(bParam0);
  iVar1 = ZONE::GET_ZONE_FROM_NAME_ID("PrLog");
  ZONE::SET_ZONE_ENABLED(iVar1, bParam0);
}