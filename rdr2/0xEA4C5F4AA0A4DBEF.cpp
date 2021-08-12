// gang2.ysc @ L35905
int func_783(var uParam0)
{
  func_458();
  func_1376();
  func_1332();
  func_1377();
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_378[1]))
  {
    VEHICLE::_0x697DF68F3A761A50(iLocal_378[1]);
  }
  WEAPON::SET_CURRENT_PED_WEAPON(iLocal_315[1], joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), true, 2, false, false);
  func_1378(uParam0, iLocal_315[1], 2, "w_revolver_doubleaction01", 0, 0);
  if (CAM::IS_GAMEPLAY_CAM_SHAKING())
  {
    CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
  }
  if (CAM::_0x927B810E43E99932(&Local_909))
  {
    CAM::_0x0A5A4F1979ABB40E(&Local_909);
  }
  if (PHYSICS::DOES_ROPE_EXIST(Local_524.f_136))
  {
    PHYSICS::DELETE_ROPE(&(Local_524.f_136));
  }
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_386))
  {
    OBJECT::DELETE_OBJECT(&iLocal_386);
  }
  return 1;
}