// rcm_abigail31.ysc @ L45685
void func_1451(var uParam0)
{
  if (GRAPHICS::GET_TV_CHANNEL() == -1)
  {
    return;
  }
  GRAPHICS::SET_TV_CHANNEL(-1);
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1088))
  {
    ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1088, false);
  }
  if (uParam0->f_1072)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1089))
    {
      OBJECT::_0xF49574E2332A8F06(uParam0->f_1089, 0f);
      OBJECT::_0x04D1D4E411CE52D0(uParam0->f_1089, 0);
    }
  }
  if (AUDIO::IS_STREAM_PLAYING(uParam0->f_1100))
  {
    AUDIO::STOP_STREAM(uParam0->f_1100);
  }
}