// beat_bandito_execution.ysc @ L10329
void func_314(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
  int iVar0;

  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iParam1);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, fParam5, -1, 0.25f, 0, 40000f);
  func_320(iParam0, &iVar0, 0, 0, 1, 1);
}