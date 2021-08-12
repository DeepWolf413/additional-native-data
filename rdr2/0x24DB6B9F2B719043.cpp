// gang1.ysc @ L34698
int func_754(var uParam0)
{
  FIRE::_0x24DB6B9F2B719043(1.5f);
  func_1219(Local_14.f_14, 0);
  if (!func_8(uParam0, 8))
  {
    if (func_165(Global_35, 0))
    {
      PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
    }
  }
  if (func_165(iLocal_198, 0) && PED::IS_PED_IN_VEHICLE(iLocal_198, iLocal_201, false))
  {
    TASK::TASK_VEHICLE_SHOOT_AT_COORD(iLocal_198, func_1214(3), 20f);
  }
  PED::_0xE6CB36F43A95D75F(0.25f);
  PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
  func_222(&uLocal_304);
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_236))
  {
    iLocal_236 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2252.089f, -782.3533f, 43.28002f, 0f, 0f, 0f, 1.244468f, 1.256194f, 1f);
  }
  return 1;
}