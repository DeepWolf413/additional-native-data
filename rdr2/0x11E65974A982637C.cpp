// dynamic_craft_scenario.ysc @ L1343
bool func_30()
{
  float fVar0;
  float fVar1;
  float fVar2;

  fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
  fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
  fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
  if (fVar2 >= (0.1f * 0.1f))
  {
    return true;
  }
  return false;
}