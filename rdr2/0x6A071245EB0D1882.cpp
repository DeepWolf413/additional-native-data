// ambush_bnd_cliff1.ysc @ L3455
void func_147()
{
  vector3 vVar0;
  float fVar3;

  if (func_133(&Local_274, 16))
  {
    return;
  }
  vVar0 = { func_277(&Local_274, 0) };
  fVar3 = func_216(Local_15[0], vVar0, 0);
  if (fVar3 < 16f)
  {
    TASK::TASK_GO_TO_ENTITY(Local_15[0], Global_35, -1, (40f - 5f), 2.5f, 2f, 0);
    func_238(&Local_274, 16);
  }
}