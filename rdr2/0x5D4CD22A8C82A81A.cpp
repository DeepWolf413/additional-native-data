// winter1.ysc @ L36712
bool func_824(var uParam0)
{
  if (func_497(Global_35, 0))
  {
    PED::_0x5D4CD22A8C82A81A(Global_35, 1);
  }
  WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
  TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
  func_165(0, 1);
  AUDIO::_0x87E6302FC61208CC("BLOCKED_CONTEXTS_WNT1_INTERROGATION");
  return uParam0->f_607 == uParam0->f_607;
}