// hunting1.ysc @ L58218
void func_1405(int iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4)
{
  bool bVar0;

  bVar0 = true;
  if (func_1999(Global_35, iParam0, 1) > 6.25f)
  {
    bVar0 = false;
  }
  if (func_1988())
  {
    bVar0 = false;
  }
  if (PLAYER::_0x1DA5C5B0923E1B85(PLAYER::PLAYER_ID()))
  {
    bVar0 = false;
  }
  if (bVar0)
  {
    HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iParam0, 2.5f, 1, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0), &cParam1, 0);
  }
}