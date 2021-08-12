// am_armwrestling.ysc @ L120269
void func_1021(var uParam0, var* uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)
{
  int iVar0;
  
  func_1393(uParam0, iParam4);
  func_1028(uParam1, iParam4);
  HUD::DISPLAY_RADAR(false);
  func_1026(uParam3);
  func_1024(uParam2, joaat("proair_hoc_puck"));
  func_1023(uParam2);
  STREAMING::REQUEST_ANIM_DICT("mini@arm_wrestling");
  if (bParam5)
  {
    iVar0 = 10;
  }
  else
  {
    iVar0 = 3;
  }
  HUD::REQUEST_ADDITIONAL_TEXT("ARM_MP", iVar0);
  uParam3->f_476 = func_1022();
  AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
  AUDIO::LOAD_STREAM("ARM_WRESTLING_CROWD_MASTER", 0);
}