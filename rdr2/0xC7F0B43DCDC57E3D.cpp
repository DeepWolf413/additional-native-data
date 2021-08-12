// beat_bandito_execution.ysc @ L10413
void func_318(int iParam0, int iParam1, vector3 vParam2)
{
  if (!func_315(iParam0) || func_128(iParam0, -208384378))
  {
    return;
  }
  TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iParam0, iParam1, vParam2, 1f, 4);
}