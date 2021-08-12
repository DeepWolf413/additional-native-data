// pausemenu_multiplayer.ysc @ L78100
void func_1251(int iParam0)
{
  HUD::TAKE_CONTROL_OF_FRONTEND();
  iLocal_1206 = 0;
  if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
  {
    if (!MISC::IS_BIT_SET(iLocal_1128, 0))
    {
      func_1462(0);
      func_1462(1);
      func_1462(2);
      func_51(1, 0, 3, "PM_SIGNING_IN", "PM_SIGNING_IN_TITLE", 0, "", "", -1, 0, 0);
      *iParam0 = 0;
      MISC::SET_BIT(&iLocal_1128, 0);
      func_1286();
      func_1282(0);
    }
  }
  else
  {
    *iParam0++;
    if (*iParam0 > 50)
    {
      *iParam0 = 0;
      MISC::CLEAR_BIT(&iLocal_1128, 0);
      func_1252(iParam0);
      func_1286();
      func_1282(0);
    }
  }
  HUD::RELEASE_CONTROL_OF_FRONTEND();
}