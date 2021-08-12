// av_pump_cart.ysc @ L1796
int func_32(var uParam0, var uParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_11))
  {
    VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_11, false);
  }
  return 1;
}