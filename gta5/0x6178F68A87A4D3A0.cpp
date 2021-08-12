// am_challenges.ysc @ L6688
void func_170()
{
  if (!MISC::IS_BIT_SET(iLocal_319, 6))
  {
    HUD::CLEAR_ALL_HELP_MESSAGES();
    func_469(1, 1);
    AUDIO::STOP_SOUND(iLocal_327);
    MISC::CLEAR_BIT(&iLocal_319, 4);
    func_174();
    func_172();
    HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(0f, false, 21);
    MISC::SET_BIT(&iLocal_319, 6);
    func_171();
  }
}