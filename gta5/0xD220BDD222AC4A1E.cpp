// am_hi_plane_land_cinematic.ysc @ L169
void func_3(var uParam0)
{
  struct<25> Var0;
  
  if (CUTSCENE::IS_CUTSCENE_ACTIVE())
  {
    CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
  {
    PED::DELETE_PED(&(uParam0->f_22));
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
  {
    PED::DELETE_PED(&(uParam0->f_23));
  }
  func_54(uParam0, 0);
  CUTSCENE::REMOVE_CUTSCENE();
  STREAMING::NEW_LOAD_SCENE_STOP();
  STREAMING::CLEAR_FOCUS();
  if (HUD::THEFEED_IS_PAUSED())
  {
    HUD::THEFEED_RESUME();
  }
  func_53(0);
  func_52(&(uParam0->f_18));
  func_4(1, 0, 0, 1);
  Var0.f_5 = 1;
  Var0.f_8 = 1;
  *uParam0 = { Var0 };
}