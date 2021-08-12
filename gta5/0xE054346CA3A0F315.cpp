// family_scene_f0.ysc @ L107234
int func_603(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6)
{
  struct<3> Var0;
  var uVar3;
  
  if (func_14(iParam1, iParam2, &Var0, &uVar3))
  {
    if (!TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) == 1)
    {
      TASK::TASK_WANDER_IN_AREA(iParam0, Param3 + Var0, 25f, 3f, 6f);
    }
    fParam6 = fParam6;
    return 1;
  }
  return 0;
}