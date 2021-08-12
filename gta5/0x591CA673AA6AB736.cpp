// exile3.ysc @ L119208
void func_789(int iParam0)
{
  struct<3> Var0;
  
  Var0 = { func_792(iParam0) };
  func_765(iParam0);
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_871, false))
  {
    VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_871, Var0);
    VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_871, fLocal_1262);
    VEHICLE::SET_TRAIN_SPEED(iLocal_871, fLocal_1262);
  }
}