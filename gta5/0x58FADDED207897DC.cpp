// gb_biker_race_p2p.ysc @ L354440
void func_6028()
{
  func_760(&iLocal_309);
  func_6077(Global_1681722, -1, -1, -1, -1);
  func_6029(1, 0);
  if (iLocal_312 > -1)
  {
    AUDIO::STOP_SOUND(iLocal_312);
    AUDIO::RELEASE_SOUND_ID(iLocal_312);
    iLocal_312 = -1;
  }
  func_428();
  func_729(1);
  HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);
  VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(false);
  HUD::_0x6CDD58146A436083(0);
  AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("MP_RACES_SLIPSTREAM");
  func_419();
  func_5473();
  func_767(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
  func_738();
  Global_1683670 = 0;
  SCRIPT::TERMINATE_THIS_THREAD();
}