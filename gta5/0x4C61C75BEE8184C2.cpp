// am_hi_plane_land_cinematic.ysc @ L1692
void func_71(var uParam0)
{
  func_142(uParam0);
  if (uParam0->f_5)
  {
    if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
    {
      CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
    }
  }
  if (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED(uParam0->f_1))
  {
    if (func_13(&(uParam0->f_18), Global_262145.f_30396, 0))
    {
    }
    return;
  }
  if (uParam0->f_5)
  {
    if (!func_141(uParam0->f_23))
    {
      PED::RESURRECT_PED(uParam0->f_23);
    }
    CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_23, "MP_1", 0, 0, 64);
  }
  func_75(uParam0);
  func_72(1, 1, 0);
  CUTSCENE::START_CUTSCENE(0);
  func_52(&(uParam0->f_18));
  MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_9, 100f, 0);
  func_58();
  func_64(uParam0, 2);
}