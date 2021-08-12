// abigail2.ysc @ L39041
void func_360()
{
  HUD::REQUEST_ADDITIONAL_TEXT("ABGAIL2", 0);
  STREAMING::REQUEST_MODEL(iLocal_161);
  if ((!func_229() && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(iLocal_161))
  {
    PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
    VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_161, true);
    if (func_464(Local_100.f_35[0]))
    {
      iLocal_162 = Local_100.f_35[0];
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_162, true, true);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_161);
    }
    iLocal_167 = 1;
  }
  else
  {
    func_361();
  }
}