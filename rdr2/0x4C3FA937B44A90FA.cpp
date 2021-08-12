// homeinvasion.ysc @ L56365
void func_1510(int iParam0, float fParam1, bool bParam2)
{
  vector3 vVar0;
  int iVar3;

  if (!func_159(*iParam0, 0, 1))
  {
    return;
  }
  TASK::_0x3AD8EFF9703BE657(*iParam0, 0.1f);
  vVar0 = { -416.0379f, 1684.85f, 214.4187f };
  TASK::OPEN_SEQUENCE_TASK(&iVar3);
  TASK::TASK_SET_STEALTH_MOVEMENT(0, false, 0, false);
  if (bParam2)
  {
    TASK::TASK_STAND_STILL(0, 750);
  }
  if (func_103(*iParam0, func_1513(), 1) > BUILTIN::VDIST(vVar0, func_1513()))
  {
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, fParam1, -1, 2f, 1, 40000f);
  }
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1513(), fParam1, -1, 2f, 1, 40000f);
  TASK::TASK_SET_STEALTH_MOVEMENT(0, true, 0, false);
  func_1304(*iParam0, &iVar3, 0, 0, 1, 1);
}