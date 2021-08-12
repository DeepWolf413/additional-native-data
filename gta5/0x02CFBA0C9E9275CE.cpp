// armenian1.ysc @ L43040
void func_381()
{
  if ((func_48("AR1_RAGEBAR") || func_48("AR1_RAGEHOW")) || func_48("AR1_RAGESTAT"))
  {
    HUD::CLEAR_HELP(true);
  }
  if (MISC::IS_PC_VERSION())
  {
    if (func_48("AR1_RAGEBAR_KM"))
    {
      HUD::CLEAR_HELP(true);
    }
  }
  HUD::FLASH_ABILITY_BAR(0);
}