// av_hobo_train_hop.ysc @ L2656
int func_57(vector3 vParam0, int iParam3)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42))
  {
    iLocal_42 = VEHICLE::_CREATE_MISSION_TRAIN(iLocal_50, vParam0, true, false, true, true);
    VEHICLE::SET_TRAIN_SPEED(iLocal_42, 0f);
    VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_42, 0f);
    VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_42, false, true);
    VEHICLE::_0x1BFBAFCC6760FF02(iLocal_42, 0);
    bLocal_12 = true;
  }
  if (!VEHICLE::_0xBD3C4A2ED509205E(iLocal_42))
  {
    return 0;
  }
  return 1;
}