// benchmark.ysc @ L13068
bool func_488()
{
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    return false;
  }
  if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_SKIP_CUTSCENE")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_SKIP_CUTSCENE")))
  {
    return true;
  }
  return false;
}