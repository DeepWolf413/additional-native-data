// homeinvasion.ysc @ L44262
void func_1130(vector3 vParam0, float fParam3)
{
  int iVar0;

  WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
  WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam0, 1f, 20000, 0.1f, 0, 40000f);
  TASK::TASK_ACHIEVE_HEADING(0, fParam3, 0);
  func_1304(Global_35, &iVar0, 0, 0, 1, 1);
}