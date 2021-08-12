// am_beach_washup_cinematic.ysc @ L815
void func_48(var uParam0, struct<3> Param1, var uParam4)
{
  func_50(uParam0, Param1);
  func_49(uParam0, uParam4);
  func_4(1, 1, 1, 0, 0, 0, 0);
  ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param1, true, false, false, true);
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    STREAMING::LOAD_ALL_OBJECTS_NOW();
  }
}