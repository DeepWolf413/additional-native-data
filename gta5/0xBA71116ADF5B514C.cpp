// benchmark.ysc @ L589
int func_16()
{
  if (iLocal_219 == 1)
  {
    return 0;
  }
  if ((MISC::GET_GAME_TIMER() - iLocal_220) > iLocal_221)
  {
    return 1;
  }
  if (func_540(iLocal_215) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_169, iLocal_215))
  {
    VEHICLE::EXPLODE_VEHICLE(iLocal_215, true, false);
    return 1;
  }
  if (func_540(iLocal_193[0]) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_169, iLocal_193[0]))
  {
    VEHICLE::EXPLODE_VEHICLE(iLocal_193[0], true, false);
    return 1;
  }
  if ((CAM::DOES_CAM_EXIST(iLocal_217) && ENTITY::GET_ENTITY_SPEED(iLocal_169) < 1f) && func_17(iLocal_169, iLocal_215, 1) < 15f)
  {
    return 1;
  }
  if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_169) && VEHICLE::GET_POSITION_IN_RECORDING(iLocal_169) > 849f)
  {
    return 1;
  }
  return 0;
}