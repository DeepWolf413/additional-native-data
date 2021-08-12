// ambush_gen_night_rob.ysc @ L900
bool func_20()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 <= 2)
  {
    if (func_61(Local_15[iVar0], 0, 1))
    {
      WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], true, true);
      switch (iVar0)
      {
        case 0:
          func_125(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
          break;
        case 1:
          func_125(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
          break;
        case 2:
          func_125(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
          break;
      }
      TASK::TASK_SET_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, false);
      func_127(Local_15[iVar0], func_126(&Local_15, iVar0), 0);
      func_128(&Local_15, iVar0, 64);
    }
    iVar0++;
  }
  return true;
}