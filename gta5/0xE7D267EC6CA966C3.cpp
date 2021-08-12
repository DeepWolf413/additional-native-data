// fm_deathmatch_creator.ysc @ L444242
int func_5265(int* iParam0, var uParam1)
{
  struct<3> Var0;
  
  if (!func_5239(PLAYER::PLAYER_PED_ID()))
  {
    return 0;
  }
  Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
  {
    Var0 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
  }
  if (iParam0->f_2849 == 1 || !CAM::IS_SCREEN_FADED_IN())
  {
    return 0;
  }
  if (INTERIOR::_GET_INTERIOR_FROM_GAMEPLAY_CAM() != *uParam1)
  {
    return 1;
  }
  if (Var0.f_2 > 225f)
  {
    return 1;
  }
  if (Var0.f_2 < 80f)
  {
    return 1;
  }
  return 0;
}