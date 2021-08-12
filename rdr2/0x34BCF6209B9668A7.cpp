// train_fast_travel_core.ysc @ L370
int func_13()
{
  if (!CAM::IS_CINEMATIC_CAM_RENDERING())
  {
    iLocal_103 = MISC::GET_GAME_TIMER();
  }
  LAW::_0xE94B5E938619712E();
  if ((MISC::GET_GAME_TIMER() - iLocal_103) > 3500)
  {
    VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_97, false);
    VEHICLE::_0xA72B1BF3857B94D7(iLocal_97, 1);
    VEHICLE::_0xDD100CE1EBBF37E3(iLocal_97, 0);
    VEHICLE::_0x4182C037AA1F0091(iLocal_97, 0);
    VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
    VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
    VEHICLE::_0x34BCF6209B9668A7(Global_1425371[iLocal_99 /*373*/].f_1, 1);
    return 4;
  }
  return -1;
}