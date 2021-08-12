// coachrobberies.ysc @ L9438
void func_291(var uParam0, vector3 vParam1, float fParam4)
{
  uParam0->f_1 = VEHICLE::CREATE_VEHICLE(uParam0->f_1.f_1, vParam1, fParam4, true, true, false, false);
  if (uParam0->f_678 != -1)
  {
    VEHICLE::_0x8C6D9A399126C194(uParam0->f_1, uParam0->f_678);
  }
  uParam0->f_596 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_1);
  AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_1, "Robberies_Coach_Target_Group", 0f);
  func_478(uParam0->f_1);
  func_479(uParam0->f_1);
  VEHICLE::_0x850CE59DEC2028F3(uParam0->f_1, 0);
  Global_1392388.f_5 = uParam0->f_1;
}