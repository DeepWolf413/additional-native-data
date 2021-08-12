// beat_bandito_execution.ysc @ L10422
void func_319(int iParam0, vector3 vParam1, float fParam4)
{
  if (func_62(iParam0, 0, 1))
  {
    if (func_519(vParam1, func_291(5)))
    {
      TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, vParam1, fParam4, -1, 1193033728 /* Float: 40000f */, 0.3f, 0);
    }
    else
    {
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vParam1, fParam4, -1, 0.25f, 0, 40000f);
    }
  }
}