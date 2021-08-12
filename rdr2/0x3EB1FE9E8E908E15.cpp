// beat_rat_infestation.ysc @ L1658
void func_34()
{
  int iVar0;

  PED::_0xEEED8FAFEC331A70(iLocal_98[0], Global_36, 3);
  TASK::_0x2E1D6D87346BB7D2(iLocal_98[0], Global_35, 0, 0);
  if (!func_126(iLocal_98[0]))
  {
    func_127(iLocal_98[0], 0);
    if (!func_15(iLocal_34, 32))
    {
      func_36(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
      func_17(&iLocal_34, 32);
    }
    TASK::TASK_SMART_FLEE_PED(iLocal_98[0], Global_35, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
  }
  else
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2795.592f, -1164.554f, 46.924f, 2f, 20000, 0.25f, 0, 40000f);
    TASK::TASK_COWER(0, -1, Global_35, 0);
    func_128(iLocal_98[0], &iVar0, 0, 0, 1, 1);
  }
}