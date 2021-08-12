// main.ysc @ L100559
void func_576(int iParam0)
{
  if (iParam0 == 1)
  {
    if (!MISC::IS_BIT_SET(Global_99370.f_20, 11))
    {
      AUDIO::BLOCK_DEATH_JINGLE(true);
      MISC::SET_BIT(&(Global_99370.f_20), 11);
    }
  }
  else if (MISC::IS_BIT_SET(Global_99370.f_20, 11))
  {
    AUDIO::BLOCK_DEATH_JINGLE(false);
    MISC::CLEAR_BIT(&(Global_99370.f_20), 11);
  }
}