// grays1.ysc @ L74977
int func_1834()
{
  if (PED::IS_PED_IN_VEHICLE(Local_538[1 /*17*/], iLocal_662[0], false))
  {
    PED::_0xE0B61ED8BB37712F(Local_538[1 /*17*/]);
  }
  if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_95[38], false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_95[38], true, false))
  {
    func_1878(28, 1);
    func_1878(32, 0);
    ANIMSCENE::START_ANIM_SCENE(iLocal_95[38]);
  }
  else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_95[38], false))
  {
    return 1;
  }
  return 0;
}