// act_caunc_rustling_invite.ysc @ L6848
void func_223(int* iParam0, bool bParam1)
{
  if (!MISC::IS_BIT_SET(*iParam0, 7))
  {
    if (bParam1)
    {
      CAM::_0xC64ABC0676AF262B();
    }
    else
    {
      CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
    }
  }
  if (MISC::IS_BIT_SET(iParam0->f_21, 3))
  {
    MISC::CLEAR_BIT(&(iParam0->f_21), 3);
  }
  if (MISC::IS_BIT_SET(iParam0->f_21, 4))
  {
    MISC::CLEAR_BIT(&(iParam0->f_21), 4);
  }
  HUD::_DISPLAY_HUD_COMPONENT(724769646);
}