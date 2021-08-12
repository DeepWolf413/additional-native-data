// rcm_collect_dinosaur_bones12.ysc @ L3468
void func_144(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_1))
  {
    PED::DELETE_PED(&(Local_14.f_1));
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_34))
  {
    VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(Local_14.f_34, Global_35, 0);
  }
  if (INTERIOR::IS_VALID_INTERIOR(Local_14))
  {
    INTERIOR::UNPIN_INTERIOR(Local_14);
  }
  AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_Dino_Lady_Working_In_Barn", false, true);
  func_366(&(Local_14.f_38), Local_14.f_1);
  func_294(160425541, 1, 0f, 0, 0, 0, 0, 0);
  func_294(-1127035680, 1, 0f, 0, 0, 0, 0, 0);
}