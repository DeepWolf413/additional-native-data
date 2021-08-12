// stripclub.ysc @ L3197
void func_121(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
  bParam4 = false;
  if ((func_1042() || iParam3) && !bParam4)
  {
    NETWORK::_NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(*iParam0, sParam1, sParam2);
  }
  else
  {
    CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_205, *iParam0, sParam2, sParam1);
    CAM::SET_CAM_ACTIVE(iLocal_205, true);
  }
  func_122(iLocal_205);
  func_1032(&uLocal_267, 262144);
}