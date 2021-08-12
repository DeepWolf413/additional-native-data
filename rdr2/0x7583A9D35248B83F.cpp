// campfire_always.ysc @ L4726
bool func_96(int iParam0)
{
  int iVar0;
  int iVar1;

  if (iParam0->f_115 >= 0)
  {
    iVar0 = iParam0->f_115;
    if (!func_205(iParam0->f_16[iVar0], -1675293671) && !PED::_0x7583A9D35248B83F(iParam0->f_16[iVar0]))
    {
      func_280(iParam0, iParam0->f_16[iVar0], Global_35, func_299(iParam0), 0, 1, 1744022339, -1073741824 /* Float: -2f */, -1, 0, 0);
      TASK::OPEN_SEQUENCE_TASK(&iVar1);
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_140[iVar0 /*3*/], 1f, 20000, 1f, 0, 40000f);
      TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iParam0->f_16[iVar0], true, false), 4f, 0, false, false, false, true);
      func_300(iParam0->f_16[iVar0], &iVar1, 0, 0, 1, 1);
      func_86(iParam0, 64);
      func_301(iParam0, iVar0);
      iParam0->f_115 = -1;
      return true;
    }
  }
  return false;
}