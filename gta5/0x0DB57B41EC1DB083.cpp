// fmmc_launcher.ysc @ L334453
void func_4852(var uParam0, bool bParam1)
{
  uParam0->f_964 = 0;
  uParam0->f_966 = 0;
  if (CAM::DOES_CAM_EXIST(uParam0->f_958))
  {
    CAM::DESTROY_CAM(uParam0->f_958, false);
  }
  if (CAM::DOES_CAM_EXIST(Global_2453009.f_781))
  {
    CAM::DESTROY_CAM(Global_2453009.f_781, false);
  }
  if (bParam1)
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1203))
  {
    OBJECT::DELETE_OBJECT(&(uParam0->f_1203));
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1204))
  {
    OBJECT::DELETE_OBJECT(&(uParam0->f_1204));
  }
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_pistol_clip_01")));
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1205))
  {
    PED::DELETE_PED(&(uParam0->f_1205));
  }
  func_4829(162);
}