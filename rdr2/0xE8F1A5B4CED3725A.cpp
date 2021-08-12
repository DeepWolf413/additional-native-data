// beat_dead_john.ysc @ L2842
void func_45(int iParam0)
{
  if (iParam0 == 0)
  {
    TASK::OPEN_SEQUENCE_TASK(&iLocal_1290);
  }
  if (func_50(uLocal_1250[1], iLocal_1233, 0, 1))
  {
    if (iLocal_1026 > 4)
    {
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -317.4022f, 816.7648f, 121.8743f, 2f, -1, 0.25f, 2049, 40000f);
    }
  }
  TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 49409, -1082130432 /* Float: -1f */, -1, 0);
  if (iParam0 == 0)
  {
    func_46(uLocal_1250[1], &iLocal_1290, 0, 0, 1, 1);
    PED::SET_PED_KEEP_TASK(uLocal_1250[1], true);
  }
  TASK::_0xE8F1A5B4CED3725A(uLocal_1250[1], Local_923.f_32, -1082130432 /* Float: -1f */);
  func_49(&(iLocal_1271[0]));
  func_49(&(iLocal_1271[1]));
  func_39(&iLocal_1164, 536870912);
}