// ambush_bnd_cliff1.ysc @ L900
bool func_20()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 <= 4)
  {
    if (func_61(Local_15[iVar0], 0, 0))
    {
      func_126(Local_15[iVar0], func_125(iVar0), 0);
      if (func_61(Local_15.f_40[iVar0], 0, 0))
      {
        PED::_SET_PED_ON_MOUNT(Local_15[iVar0], Local_15.f_40[iVar0], -1, true);
      }
      switch (iVar0)
      {
        case 0:
          Local_274.f_55 = PED::GET_PED_ACCURACY(Local_15[iVar0]);
          func_127(&Local_15, Local_15[iVar0], joaat("GROUP_REPEATER"), 1);
          break;
        default:
          func_127(&Local_15, Local_15[iVar0], joaat("GROUP_REVOLVER"), 1);
          break;
      }
      func_128(&Local_15, iVar0);
    }
    iVar0++;
  }
  func_129();
  func_130(&(Local_15.f_182), 1, 2.5f, 2.001f, 2.001f, 2.5f, 0);
  return true;
}