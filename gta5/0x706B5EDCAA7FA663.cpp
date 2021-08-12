// animal_controller.ysc @ L1687
void func_30(bool bParam0)
{
  if (bParam0)
  {
    MISC::SET_FADE_OUT_AFTER_DEATH(false);
    MISC::SET_FADE_OUT_AFTER_ARREST(false);
    MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
    MISC::_SET_RESTART_CUSTOM_POSITION(Local_827[iLocal_1355 /*46*/][iLocal_1356 /*3*/], Local_1012[iLocal_1355 /*16*/][iLocal_1356]);
  }
  else
  {
    MISC::SET_FADE_OUT_AFTER_DEATH(true);
    MISC::SET_FADE_OUT_AFTER_ARREST(true);
    MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
    MISC::_CLEAR_RESTART_CUSTOM_POSITION();
    MISC::IGNORE_NEXT_RESTART(false);
    MISC::PAUSE_DEATH_ARREST_RESTART(false);
  }
}